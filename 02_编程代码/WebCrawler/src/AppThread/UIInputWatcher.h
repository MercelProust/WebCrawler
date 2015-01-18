///////////////////////////////////////////////////////////
//  UIInputWatcher.h
//  Implementation of the Class UIInputWatcher
//  Created on:      30-11-2014 11:46:56
//  Original author: MercelProust
///////////////////////////////////////////////////////////

#if !defined(EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_)
#define EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_

#include "../Util/UIEvent.h"
#include "IUIInputProcessor.h"
#include "IThread.h"
#include <string>
#include <vector>
#include <map>
#include "WebCrawlerAppLication.h"
#include "../Util/UIEvent.h"

class WebCrawlerAppLication;

/**
 * 监视用户输入，并通知指定对象
 */
class UIInputWatcher : public IThread
{

public:
	UIInputWatcher();
	virtual ~UIInputWatcher();
	IUIInputProcessor *m_IUIInputProcessor;

	void notify(UIEvent type, std::vector<std::string> param);
	bool parseInputText(std::string text, UIEvent& type, std::vector<std::string>& param);
	void regist(UIEvent type, IUIInputProcessor* one_processor);

	void stop();

protected:
	virtual void* run(void* p_data);

private:
	std::map<UIEvent, std::vector<IUIInputProcessor*> > processor;

	bool stop_thread;

};
#endif // !defined(EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_)
