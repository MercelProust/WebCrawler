///////////////////////////////////////////////////////////
//  HttpDriver.h
//  Implementation of the Class HttpDriver
//  Created on:      30-Ê®Ò»ÔÂ-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_8A1BAC3B_322C_47b7_8F19_DDB8BCCD1AEC__INCLUDED_)
#define EA_8A1BAC3B_322C_47b7_8F19_DDB8BCCD1AEC__INCLUDED_

#include "ITransactionDriver.h"

class HttpDriver : public ITransactionDriver
{

public:
	HttpDriver();
	virtual ~HttpDriver();

	virtual int connect();
	virtual void disconnect();
	int sendGet(string msg, string response);
	int sendPost(string msg, string response);

};
#endif // !defined(EA_8A1BAC3B_322C_47b7_8F19_DDB8BCCD1AEC__INCLUDED_)
