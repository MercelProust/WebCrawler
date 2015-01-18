//============================================================================
// Name        : WebCrawler.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WebCrawlerAppLication.h"

using namespace std;

int main() {
	cout << "!Web Crawler begin..." << endl;

	WebCrawlerAppLication app;
	app.execute();

	cout << "!Web Crawler ended\nPress any key to exit\n." << endl;
	cin.get();
	return 0;
}
