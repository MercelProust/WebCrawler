///////////////////////////////////////////////////////////
//  UIInputWatcher.cpp
//  Implementation of the Class UIInputWatcher
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "UIInputWatcher.h"

using namespace std;

UIInputWatcher::UIInputWatcher(){
	m_IUIInputProcessor = NULL;
}



UIInputWatcher::~UIInputWatcher(){
	if (m_IUIInputProcessor != NULL)
	{
		delete m_IUIInputProcessor;
		m_IUIInputProcessor = NULL;
	}
}


void UIInputWatcher::notify(UIEvent type, std::vector<string> param){

}


void UIInputWatcher::parseInputText(string text, UIEvent& type, std::vector<string>& param){

}


/**
 * 注册通知对象
 */
void UIInputWatcher::regist(UIEvent type, IUIInputProcessor& processor){

}


/**
 * 线程运行
 */
void UIInputWatcher::run(){

}
