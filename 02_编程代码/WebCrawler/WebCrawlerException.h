///////////////////////////////////////////////////////////
//  WebCrawlerException.h
//  Implementation of the Class WebCrawlerException
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_8C706759_66A0_4df1_A3CB_E4F6917E047E__INCLUDED_)
#define EA_8C706759_66A0_4df1_A3CB_E4F6917E047E__INCLUDED_

/**
 * 程序内异常
 */
class WebCrawlerException
{

public:
	WebCrawlerException();
	virtual ~WebCrawlerException();

	WebCrawlerException(string exception_msg);
	void printExceptionMsg();

private:
	string exception_msg;

};
#endif // !defined(EA_8C706759_66A0_4df1_A3CB_E4F6917E047E__INCLUDED_)
