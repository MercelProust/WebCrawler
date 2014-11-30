///////////////////////////////////////////////////////////
//  WebCrawlerException.h
//  Implementation of the Class WebCrawlerException
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef WEBCRAWLEREXCEPTION_H
#define WEBCRAWLEREXCEPTION_H

#include <string>

/**
 * 程序运行异常类
 */
class WebCrawlerException
{

public:
	WebCrawlerException();
	virtual ~WebCrawlerException();

	WebCrawlerException(std::string exception_msg);
	void printExceptionMsg();

private:
	std::string exception_msg;

};
#endif // !defined(EA_8C706759_66A0_4df1_A3CB_E4F6917E047E__INCLUDED_)
