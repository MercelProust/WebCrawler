///////////////////////////////////////////////////////////
//  WebCrawlerThread.h
//  Implementation of the Class WebCrawlerThread
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef WEBCRAWLERTHREAD_H
#define WEBCRAWLERTHREAD_H

#include "../Util/FileManager.h"
#include "../Driver/ITransactionDriver.h"
#include "IThread.h"
#include <string>
#include "../Util/ITextParser.h"
#include "../Util/HttpPageTxtParser.h"
#include "../Driver/ITransactionDriver.h"

class ITextParser;

/**
 * 网页爬虫线程
 */
class WebCrawlerThread : public IThread
{

public:
	WebCrawlerThread(std::string web_site);
	virtual ~WebCrawlerThread();

public:
	virtual void run();

private:
	FileManager* file_mgr;
	ITextParser* parser;
	ITransactionDriver* transactor;
	std::string web_site;

};
#endif
