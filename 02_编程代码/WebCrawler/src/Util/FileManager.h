///////////////////////////////////////////////////////////
//  FileManager.h
//  Implementation of the Class FileManager
//  Created on:      30-11-2014 11:46:54
//  Original author: Administrator
///////////////////////////////////////////////////////////

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>

class FileManager
{

public:
	FileManager();
	virtual ~FileManager();

	int createDirectory(std::string path);
	int deleteDirectory(std::string path);
	int deleteFile(std::string path);
	int writeToFile(std::string path, std::string text);

};
#endif // !defined(EA_E86AF99B_3A00_46a7_BA5B_11E2B58D32DA__INCLUDED_)
