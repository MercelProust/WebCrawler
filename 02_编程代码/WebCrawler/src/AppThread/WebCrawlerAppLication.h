///////////////////////////////////////////////////////////
//  WebCrawlerAppLication.h
//  Implementation of the Class WebCrawlerAppLication
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef WEBCRAWLERAPPLICATION_H
#define WEBCRAWLERAPPLICATION_H

#include "IThread.h"
#include "IUIInputProcessor.h"
#include <string>
#include <vector>
#include <set>
#include "UIInputWatcher.h"
#include <pthread.h>

class UIInputWatcher;

/**
 *程序类
 */
class WebCrawlerAppLication : public IUIInputProcessor
{

public:
	WebCrawlerAppLication();
	virtual ~WebCrawlerAppLication();
	UIInputWatcher*  m_UIThread;

	void execute();		//对象执行主体函数。等待用户画面输入
	std::vector<std::string> getWebSiteList();	//返回当前对象已经处理/处理中的网站列表
	virtual void notifyUIEvents(std::vector<std::string> param);	//通知本对象处理画面输入的网址，通知方法

private:
	pthread_mutex_t m_add_website_mutex;	//添加网站的锁所用的互斥变量
	pthread_mutex_t m_notify_event_mutex;	//通知事件执行锁定互斥变量

private:
	/**
	 *线程集合
	 */
	std::set<IThread*> web_crawler_thread_set;
	/**
	 *网站列表
	 */
	std::vector<std::string> web_site_list;

	//快速互斥锁，锁定网站列表
	pthread_mutex_t web_site_ls_mutex;

	void activateCrawlerTd(std::string web_site);
	void notifyAddWebSiteList(std::string web_site);

};
#endif
