/*
 * StrOperator.h
 *
 *  Created on: 2015年1月17日
 *      Author: proust
 */

#ifndef STROPERATOR_H_
#define STROPERATOR_H_
#include <cctype>
#include <iostream>
#include <algorithm>

using namespace std;

inline string& ltrim(string &str) {
	string::iterator p = find_if(str.begin(), str.end(), not1(ptr_fun<int, int>(isspace)));
	str.erase(str.begin(), p);
	return str;
}

inline string& rtrim(string &str) {
	string::reverse_iterator p = find_if(str.rbegin(), str.rend(), not1(ptr_fun<int , int>(isspace)));
	str.erase(p.base(), str.end());
	return str;
}

inline string& trim(string &str) {
	ltrim(rtrim(str));
	return str;
}

#endif /* STROPERATOR_H_ */
