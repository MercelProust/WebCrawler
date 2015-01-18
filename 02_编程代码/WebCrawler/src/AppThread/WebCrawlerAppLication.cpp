///////////////////////////////////////////////////////////
//  WebCrawlerAppLication.cpp
//  Implementation of the Class WebCrawlerAppLication
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "WebCrawlerAppLication.h"
#include "WebCrawlerThread.h"
#include "../Util/Consts.h"

using namespace std;

WebCrawlerAppLication::WebCrawlerAppLication(){
	m_UIThread = new UIInputWatcher;
	m_UIThread->regist(WEB_SITE,  (*this));
}

WebCrawlerAppLication::~WebCrawlerAppLication(){

	std::set<IThread*>::iterator it;

	if (m_UIThread != NULL)
	{
		delete m_UIThread;
		m_UIThread = NULL;
	}

	for (it=web_crawler_thread_set.begin(); it != web_crawler_thread_set.end(); it++)
	{
		delete (*it);
	}
	web_crawler_thread_set.clear();
}

/**
 * 开启新的爬虫线程,并添加至爬虫线程
 */
void WebCrawlerAppLication::activateCrawlerTd(string web_site){

	try
	{
		WebCrawlerThread* webCrawlerThread =  new WebCrawlerThread(web_site);
		this->web_crawler_thread_set.insert((IThread*)webCrawlerThread);
		webCrawlerThread->run();
	}
	catch (...)
	{
		PRINT_EXCEPTION_COMMON_INFO
	}
}


/**
 * 执行
 */
void WebCrawlerAppLication::execute(){

}


/**
 * return web_site_list
 */
vector<string> WebCrawlerAppLication::getWebSiteList(){

	return  web_site_list;
}


/**
 *接受新增网站的网址，添加到本对象的web_site_list列表，并开启新的子线程进行相关的抓取
 */
void WebCrawlerAppLication::notifyAddWebSiteList(string web_site){

}


void WebCrawlerAppLication::notifyUIEvents(std::vector<string> param){

}
