///////////////////////////////////////////////////////////
//  IUIInputProcessor.h
//  Implementation of the Class IUIInputProcessor
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_D8671354_EA92_4d6c_8924_F0424877E742__INCLUDED_)
#define EA_D8671354_EA92_4d6c_8924_F0424877E742__INCLUDED_

/**
 * 从UI获取输入时，事件的通知对象
 */
class IUIInputProcessor
{

public:
	IUIInputProcessor();
	virtual ~IUIInputProcessor();

	virtual void notifyUIEvents(std::vector<string> param) =0;

};
#endif // !defined(EA_D8671354_EA92_4d6c_8924_F0424877E742__INCLUDED_)
