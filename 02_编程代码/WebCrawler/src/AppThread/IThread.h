///////////////////////////////////////////////////////////
//  IThread.h
//  Implementation of the Class IThread
//  Created on:      30-11-2014 11:46:55
//  Original author: MercelPorust
///////////////////////////////////////////////////////////

#ifndef ITHREAD_H
#define ITHREAD_H

#include <pthread.h>

/**
 * 运行线程接口包装
 */
class IThread
{

public:
	IThread();
	virtual ~IThread();

	pthread_t getTd();
	void join();
	bool start();
	virtual void stop();
	bool is_alive();

private:
	static void* thread_run(void* p_data);

protected:
	virtual void* run(void* p_data) = 0;

protected:
	// 线程句柄
	pthread_t td;

private:
	void *thread_params[2];
};
#endif
