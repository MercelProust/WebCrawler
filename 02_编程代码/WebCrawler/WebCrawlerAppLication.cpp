///////////////////////////////////////////////////////////
//  WebCrawlerAppLication.cpp
//  Implementation of the Class WebCrawlerAppLication
//  Created on:      30-十一月-2014 11:46:56
//  Original author: Administrator
///////////////////////////////////////////////////////////

#include "WebCrawlerAppLication.h"


WebCrawlerAppLication::WebCrawlerAppLication(){

}



WebCrawlerAppLication::~WebCrawlerAppLication(){

}





/**
 * 根据传入的网址决定是否开启新的处理线程
 */
void WebCrawlerAppLication::activateCrawlerTd(string web_site){

}


/**
 * 程序开始执行
 */
void WebCrawlerAppLication::execute(){

}


/**
 * return web_site_list
 */
std::vector<string> WebCrawlerAppLication::getWebSiteList(){

	return  NULL;
}


/**
 * 接受新增网站的网址，添加到本对象的web_site_list列表，并开启新的子线程进行相关的抓取
 */
void WebCrawlerAppLication::notifyAddWebSiteList(string web_site){

}


void WebCrawlerAppLication::notifyUIEvents(std::vector<string> param){

}