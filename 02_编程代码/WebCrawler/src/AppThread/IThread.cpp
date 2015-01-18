///////////////////////////////////////////////////////////
//  IThread.cpp
//  Implementation of the Class IThread
//  Created on:      30-112014 11:46:55
//  Original author: MercelProust
///////////////////////////////////////////////////////////

#include "IThread.h"
#include "../Util/Consts.h"
#include <pthread.h>
#include <signal.h>

using namespace std;

IThread::IThread(){
	thread_params[0] = this;
	td = 0;
}

IThread::~IThread(){

}

/**
 * return td;
 */
pthread_t IThread::getTd(){

	return  td;
}

//阻塞线程，等待线程的执行完了
void IThread::join(){

	try
	{
		int error = pthread_join(td, NULL);
		if (error != 0)
		{
			cout<<"thread start has an internal error code:"<<error<<endl;
		}
	}
	catch (...)
	{
		PRINT_EXCEPTION_COMMON_INFO;
		cout<<"exception happened in a thread start"<<endl;
	}
}


/**
 * 线程执行函数
 */
bool IThread::start(){

	bool		is_succeed = true;

	try
	{
		if (td != 0 && is_alive())
		{
			return false;
		}

		int error = pthread_create(&td, NULL, thread_run, thread_params);
		if (error != 0)
		{
			cout<<"thread start has an internal error code:"<<error<<endl;
		}
	}
	catch (...)
	{
		PRINT_EXCEPTION_COMMON_INFO;
		cout<<"exception happened in a thread start"<<endl;
		is_succeed = false;
	}

	return is_succeed;
}

/**
 * 强行终止线程,不建议使用
 */
void IThread::stop(){
	try
		{
			int error = pthread_detach(td);
			error = pthread_kill(td, SIGTERM);
			if (error != 0)
			{
				cout<<"thread kill has an internal error code:"<<error<<endl;
			}
		}
		catch (...)
		{
			PRINT_EXCEPTION_COMMON_INFO;
			cout<<"exception happened in a thread start"<<endl;
		}
}

/**
 * 判断当前线程是否还在运行
 */
bool IThread::is_alive()
{
	bool alive = false;
	int a = pthread_kill(td, 0);
	if (!a)
	{
		alive = true;
	}

	return alive;
}

void* IThread::thread_run(void* p_data)
{
	IThread* p = NULL;
	void**    p_param = NULL;

	if (p_data == NULL)
	{
		return NULL;
	}

	p_param = (void**) p_data;
	p = static_cast<IThread*>(p_param[0]);
	return p->run(p_param[1]);
}
