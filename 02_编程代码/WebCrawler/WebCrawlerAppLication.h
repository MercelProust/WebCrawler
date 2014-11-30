///////////////////////////////////////////////////////////
//  WebCrawlerAppLication.h
//  Implementation of the Class WebCrawlerAppLication
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_BCD4B57F_B446_4ad4_9AE8_C7A381863008__INCLUDED_)
#define EA_BCD4B57F_B446_4ad4_9AE8_C7A381863008__INCLUDED_

#include "IThread.h"
#include "IUIInputProcessor.h"

/**
 * 主程序类
 */
class WebCrawlerAppLication : public IUIInputProcessor
{

public:
	WebCrawlerAppLication();
	virtual ~WebCrawlerAppLication();
	IThread *m_IThread;

	void execute();
	std::vector<string> getWebSiteList();
	void notifyAddWebSiteList(string web_site);
	virtual void notifyUIEvents(std::vector<string> param);

private:
	/**
	 * 当前程序内所拥有的线程对象集合
	 */
	std::set<IThread> web_crawler_thread_set;
	/**
	 * 从屏幕获取的需要爬虫爬取的网站列表（URL）
	 */
	std::vector<string> web_site_list;

	void activateCrawlerTd(string web_site);

};
#endif // !defined(EA_BCD4B57F_B446_4ad4_9AE8_C7A381863008__INCLUDED_)
