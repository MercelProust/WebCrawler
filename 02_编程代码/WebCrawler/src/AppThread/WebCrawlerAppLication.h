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

	void execute();
	std::vector<std::string> getWebSiteList();
	void notifyAddWebSiteList(std::string web_site);
	virtual void notifyUIEvents(std::vector<std::string> param);

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

};
#endif
