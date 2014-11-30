///////////////////////////////////////////////////////////
//  IUIInputProcessor.h
//  Implementation of the Class IUIInputProcessor
//  Created on:      30-11-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef IUIINPUTPROCESSOR_H
#define IUIINPUTPROCESSOR_H

#include <string>
#include <vector>
/**
 * 处理ui界面输入线程
 */
class IUIInputProcessor
{

public:
	IUIInputProcessor();
	virtual ~IUIInputProcessor();

	virtual void notifyUIEvents(std::vector<std::string> param) =0;

};
#endif // !defined(EA_D8671354_EA92_4d6c_8924_F0424877E742__INCLUDED_)
