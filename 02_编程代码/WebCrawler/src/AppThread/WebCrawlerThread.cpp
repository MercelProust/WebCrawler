///////////////////////////////////////////////////////////
//  WebCrawlerThread.cpp
//  Implementation of the Class WebCrawlerThread
//  Created on:      30-11-2014 11:46:57
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "WebCrawlerThread.h"
#include "../Util/ITextParser.h"
#include "../Driver/HttpDriver.h"

using namespace std;


/**
 * 构造函数
 */
WebCrawlerThread::WebCrawlerThread(string web_site){
	this->web_site = web_site;
	this->file_mgr = new FileManager;
	this->transactor = new  HttpDriver;
	this->parser = new HttpPageTxtParser;
}

WebCrawlerThread::~WebCrawlerThread(){

	if (file_mgr != NULL)
	{
		delete file_mgr;
		file_mgr = NULL;
	}

	if (transactor != NULL)
	{
		delete transactor;
		transactor = NULL;
	}

	if (parser != NULL)
	{
		delete parser;
		parser = NULL;
	}
}


/**
 * 线程运行函数
 */
void WebCrawlerThread::run(){

}
