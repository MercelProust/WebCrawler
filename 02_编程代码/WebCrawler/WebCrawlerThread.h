///////////////////////////////////////////////////////////
//  WebCrawlerThread.h
//  Implementation of the Class WebCrawlerThread
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_46EB0666_E53B_45cc_8095_C80CC91187A5__INCLUDED_)
#define EA_46EB0666_E53B_45cc_8095_C80CC91187A5__INCLUDED_

#include "FileManager.h"
#include "ITransactionDriver.h"
#include "IThread.h"

/**
 * 爬虫线程
 */
class WebCrawlerThread : public IThread
{

public:
	WebCrawlerThread();
	virtual ~WebCrawlerThread();

	WebCrawlerThread(string web_site);

protected:
	virtual void run();

private:
	FileManager file_mgr;
	ITextParser parser;
	ITransactionDriver transactor;

};
#endif // !defined(EA_46EB0666_E53B_45cc_8095_C80CC91187A5__INCLUDED_)
