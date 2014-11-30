///////////////////////////////////////////////////////////
//  HttpPageTxtParser.h
//  Implementation of the Class HttpPageTxtParser
//  Created on:      30-11-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef HTTPPAGETXTPARSER_H
#define HTTPPAGETXTPARSER_H

#include "ITextParser.h"
#include <string>
#include <vector>

class HttpPageTxtParser : public ITextParser
{
public:
	HttpPageTxtParser();
	virtual ~HttpPageTxtParser();

	int parse(std::string text, std::vector<std::string>& values);

};
#endif
