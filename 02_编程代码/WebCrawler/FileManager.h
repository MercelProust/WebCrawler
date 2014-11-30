///////////////////////////////////////////////////////////
//  FileManager.h
//  Implementation of the Class FileManager
//  Created on:      30-Ê®Ò»ÔÂ-2014 11:46:54
//  Original author: Administrator
///////////////////////////////////////////////////////////

#if !defined(EA_E86AF99B_3A00_46a7_BA5B_11E2B58D32DA__INCLUDED_)
#define EA_E86AF99B_3A00_46a7_BA5B_11E2B58D32DA__INCLUDED_

class FileManager
{

public:
	FileManager();
	virtual ~FileManager();

	int createDirectory(string path);
	int deleteDirectory(string path);
	int deleteFile(string path);
	int writeToFile(string path, string text);

};
#endif // !defined(EA_E86AF99B_3A00_46a7_BA5B_11E2B58D32DA__INCLUDED_)
