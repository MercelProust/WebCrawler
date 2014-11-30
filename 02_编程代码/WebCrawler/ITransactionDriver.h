///////////////////////////////////////////////////////////
//  ITransactionDriver.h
//  Implementation of the Class ITransactionDriver
//  Created on:      30-十一月-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_70ACDB21_F8FE_4de3_B621_45A044A1A02A__INCLUDED_)
#define EA_70ACDB21_F8FE_4de3_B621_45A044A1A02A__INCLUDED_

/**
 * 传输类对象
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
	 * socket对象
	 */
	int sock;

};
#endif // !defined(EA_70ACDB21_F8FE_4de3_B621_45A044A1A02A__INCLUDED_)
