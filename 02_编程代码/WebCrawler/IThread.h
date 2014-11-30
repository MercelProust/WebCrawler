///////////////////////////////////////////////////////////
//  IThread.h
//  Implementation of the Class IThread
//  Created on:      30-ʮһ��-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_D2708E77_CBBF_4af5_8B5C_AFB8C2431323__INCLUDED_)
#define EA_D2708E77_CBBF_4af5_8B5C_AFB8C2431323__INCLUDED_

/**
 * �̰߳�װ�ӿ�
 */
class IThread
{

public:
	IThread();
	virtual ~IThread();

	pthread_t getTd();
	void join();
	bool start();
	void stop();

protected:
	/**
	 * �߳̽ṹ
	 */
	pthread_t td;

	virtual void run();

};
#endif // !defined(EA_D2708E77_CBBF_4af5_8B5C_AFB8C2431323__INCLUDED_)
