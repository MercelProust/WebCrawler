///////////////////////////////////////////////////////////
//  UIInputWatcher.cpp
//  Implementation of the Class UIInputWatcher
//  Created on:      30-11-2014 11:46:56
//  Original author: MercelProust
///////////////////////////////////////////////////////////

#include "UIInputWatcher.h"
#include "../Util/Consts.h"
#include "../Util/StrOperator.h"
#include "string.h"

using namespace std;

UIInputWatcher::UIInputWatcher(){
	m_IUIInputProcessor = NULL;
	stop_thread = false;
}



UIInputWatcher::~UIInputWatcher(){
	if (m_IUIInputProcessor != NULL)
	{
		delete m_IUIInputProcessor;
		m_IUIInputProcessor = NULL;
	}
}


/**
 * 通知注册的ＵＩ事件对应的处理者，调用其注册的事件
 */
void UIInputWatcher::notify(UIEvent type, std::vector<string> param){

	std::map<UIEvent, std::vector<IUIInputProcessor*> >::iterator it = processor.find(type);
	if (it != processor.end())
	{
		std::vector<IUIInputProcessor*>vc((*it).second);
		for (int i=0; i<(int)vc.size(); i++)
		{
			vc[i]->notifyUIEvents(param);
		}
	}
}


//解析画面输入内容，将输入的内容解析成为了各个网址．暂时不实现更多的机能，只负责单个的网址处理．有空改进算了
bool UIInputWatcher::parseInputText(string text, UIEvent& type, std::vector<string>& param){

	bool isSucceed = true;

	if (trim(text) == "")
	{
		isSucceed = false;
	}

	if (strstr(text.c_str(), "www") != NULL)
	{
		type = WEB_SITE;
	}
	else
	{
		type  = OTHERS;
	}
	param.push_back(text);

	return isSucceed;
}


/**
 * 注册通知对象
 */
void UIInputWatcher::regist(UIEvent type, IUIInputProcessor* one_processor){

	std::map<UIEvent, std::vector<IUIInputProcessor*> >::iterator it = processor.find(type);
	if (it != processor.end())
	{
		it->second.push_back(one_processor);
	}
	else
	{
		std::vector<IUIInputProcessor*> vc;
		vc.push_back(one_processor);
		processor.insert(std::make_pair(type, vc));
	}

	return;
}


/**
 * 线程运行,监视用户输入，并解析输入，通知对应的观察者
 */
void* UIInputWatcher::run(void* p_data){

	while (!stop_thread)
	{
		char line_txt[255] = {'\0'};
		string txt = "";
		UIEvent type;
		std::vector<string> notify_param_list;

		try
		{
			cin.getline(line_txt, 255);
			txt = line_txt;
			this->parseInputText(txt, type, notify_param_list);
			this->notify(type, notify_param_list);
		}
		catch (...)
		{
			PRINT_EXCEPTION_COMMON_INFO
		}
	}

	pthread_exit(0);
}

/**
 * 终止线程运行
 */
void UIInputWatcher::stop()
{
	stop_thread = true;
}
