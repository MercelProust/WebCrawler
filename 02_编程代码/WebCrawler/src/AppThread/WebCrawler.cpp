//============================================================================
// Name        : WebCrawler.cpp
// Author      : MercelProust
// Version     : 0.0.1
// Copyright   : You can use this source with GPL Licence
// Description : http web crawler application
//============================================================================

#include <iostream>
 #include <fstream>
#include "WebCrawlerAppLication.h"

using namespace std;

int main() {
	cout << "Web Crawler begin..." << endl;

	//重定向程序标准输出到out.info文件内
    streambuf* coutBuf = cout.rdbuf();
   ofstream of("out.info");
   // 获取文件out.txt流缓冲区指针
    streambuf* fileBuf = of.rdbuf();

   // 设置cout流缓冲区指针为out.txt的流缓冲区指针
    cout.rdbuf(fileBuf);

	WebCrawlerAppLication app;
	app.execute();

	//将标准输出重新定向至原始的标准输出流
	of.flush();
	of.close();
	// 恢复cout原来的流缓冲区指针
	cout.rdbuf(coutBuf);

	cout << "Web Crawler ended\nPress any key to exit\n." << endl;
	cin.get();
	return 0;
}
