///////////////////////////////////////////////////////////
//  ITextParser.h
//  Implementation of the Class ITextParser
//  Created on:      30-11-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////
#ifndef ITTXTPARSER_H
#define ITTXTPARSER_H

#include <string>
#include <vector>

class ITextParser
{
public:
	ITextParser();
	virtual ~ITextParser();
	virtual int parse(std::string text, std::vector<std::string>& values) = 0;
};
#endif
