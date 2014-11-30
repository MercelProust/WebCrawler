///////////////////////////////////////////////////////////
//  ITextParser.h
//  Implementation of the Class ITextParser
//  Created on:      30-Ê®Ò»ÔÂ-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_6EFF2F20_73E6_46e5_A32D_44A860FD3C2B__INCLUDED_)
#define EA_6EFF2F20_73E6_46e5_A32D_44A860FD3C2B__INCLUDED_

class ITextParser
{

public:
	ITextParser();
	virtual ~ITextParser();

	int parse(string text, std::vector<string>& values);

};
#endif // !defined(EA_6EFF2F20_73E6_46e5_A32D_44A860FD3C2B__INCLUDED_)
