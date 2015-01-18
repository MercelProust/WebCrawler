///////////////////////////////////////////////////////////
//  IThread.h
//  Implementation of the Class IThread
//  Created on:      30-11-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef ITHREAD_H
#define ITHREAD_H

#include <pthread.h>

/**
 * 运行线程借口包装
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
	 * 线程句柄
	 */
	pthread_t td;

public:
	//线程运行逻辑函数
	virtual void run() = 0;

};
#endif // !defined(EA_D2708E77_CBBF_4af5_8B5C_AFB8C2431323__INCLUDED_)
