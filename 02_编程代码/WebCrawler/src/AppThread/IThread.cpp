///////////////////////////////////////////////////////////
//  IThread.cpp
//  Implementation of the Class IThread
//  Created on:      30-112014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "IThread.h"


IThread::IThread(){
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


void IThread::join(){

}


/**
 * 开始具体线程
 */
bool IThread::start(){

	return false;
}


void IThread::stop(){

}
