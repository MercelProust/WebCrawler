///////////////////////////////////////////////////////////
//  HttpDriver.h
//  Implementation of the Class HttpDriver
//  Created on:      30-11-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef HTTPDRIVER_H
#define HTTPDRIVER_H

#include "ITransactionDriver.h"
#include <string>

class HttpDriver : public ITransactionDriver
{

public:
	HttpDriver();
	virtual ~HttpDriver();

	virtual int connect();
	virtual void disconnect();
	int sendGet(std::string msg, std::string response);
	int sendPost(std::string msg, std::string response);

};
#endif // !defined(EA_8A1BAC3B_322C_47b7_8F19_DDB8BCCD1AEC__INCLUDED_)
