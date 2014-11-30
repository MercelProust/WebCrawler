///////////////////////////////////////////////////////////
//  IThread.cpp
//  Implementation of the Class IThread
//  Created on:      30-十一月-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "IThread.h"


IThread::IThread(){

}



IThread::~IThread(){

}





/**
 * return td;
 */
pthread_t IThread::getTd(){

	return  NULL;
}


void IThread::join(){

}


/**
 * 线程正式执行的逻辑
 */
void IThread::run(){

}


/**
 * 正式开启线程执行
 */
bool IThread::start(){

	return false;
}


void IThread::stop(){

}