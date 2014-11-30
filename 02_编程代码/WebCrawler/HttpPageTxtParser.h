///////////////////////////////////////////////////////////
//  HttpPageTxtParser.h
//  Implementation of the Class HttpPageTxtParser
//  Created on:      30-Ê®Ò»ÔÂ-2014 11:46:55
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_DA68BC13_6938_42b2_AFDA_DA01A565D85B__INCLUDED_)
#define EA_DA68BC13_6938_42b2_AFDA_DA01A565D85B__INCLUDED_

#include "ITextParser.h"

class HttpPageTxtParser : public ITextParser
{

public:
	HttpPageTxtParser();
	virtual ~HttpPageTxtParser();

	int parse(string text, std::vector<string>& values);

};
#endif // !defined(EA_DA68BC13_6938_42b2_AFDA_DA01A565D85B__INCLUDED_)
