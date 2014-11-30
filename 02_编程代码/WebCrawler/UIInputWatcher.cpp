///////////////////////////////////////////////////////////
//  UIInputWatcher.cpp
//  Implementation of the Class UIInputWatcher
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "UIInputWatcher.h"


UIInputWatcher::UIInputWatcher(){

}



UIInputWatcher::~UIInputWatcher(){

}





void UIInputWatcher::notify(UIEvent type, std::vector<string> param){

}


void UIInputWatcher::parseInputText(string text, UIEvent& type, std::vector<string>& param){

}


/**
 * 注册事件发生时的通知对象
 */
void UIInputWatcher::regist(UIEvent type, IUIInputProcessor processor){

}


/**
 * 用于监视程序的用户输入，并根据用户输入进行相应的通知
 */
void UIInputWatcher::run(){

}