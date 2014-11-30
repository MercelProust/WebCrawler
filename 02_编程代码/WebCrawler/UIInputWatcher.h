///////////////////////////////////////////////////////////
//  UIInputWatcher.h
//  Implementation of the Class UIInputWatcher
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_)
#define EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_

#include "UIEvent.h"
#include "IUIInputProcessor.h"
#include "IThread.h"

/**
 * 监视用户输入
 */
class UIInputWatcher : public IThread
{

public:
	UIInputWatcher();
	virtual ~UIInputWatcher();
	IUIInputProcessor *m_IUIInputProcessor;

	void notify(UIEvent type, std::vector<string> param);
	void parseInputText(string text, UIEvent& type, std::vector<string>& param);
	void regist(UIEvent type, IUIInputProcessor processor);

protected:
	void run();

private:
	std::map<UIEvent, std::vactor<IUIInputProcessor>> processir;

};
#endif // !defined(EA_0DE1839A_EC1B_4a92_9C16_D5C94523F105__INCLUDED_)
