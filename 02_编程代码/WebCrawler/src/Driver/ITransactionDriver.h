///////////////////////////////////////////////////////////
//  ITransactionDriver.h
//  Implementation of the Class ITransactionDriver
//  Created on:      30-11-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef ITRANSACTIONDRIVER_H
#define ITRANSACTIONDRIVER_H

/**
 *网络通信驱动层包装借口
 */
class ITransactionDriver
{

public:
	ITransactionDriver();
	virtual ~ITransactionDriver();

	virtual int connect() =0;
	virtual void disconnect() =0;

private:
	/**
	 * socket����
	 */
	int sock;

};
#endif // !defined(EA_70ACDB21_F8FE_4de3_B621_45A044A1A02A__INCLUDED_)
