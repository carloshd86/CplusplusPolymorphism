// Practica16CarlosHD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "File.h"
#include "Com.h"
#include "Tcp.h"


int main()
{
	CStream * file = new CFile;
	CStream * tcp = new CTcp;
	CStream * com = new CCom;

	unsigned int size = 2;
	char * buffer = new char[size];

	printf("\nFile:");

	file->Open();
	file->Read(buffer, size);
	file->Write(buffer, size);
	file->Close();


	printf("\nTcp:");

	tcp->Open();
	tcp->Read(buffer, size);
	tcp->Write(buffer, size);
	tcp->Close();


	printf("\nCom:");

	com->Open();
	com->Read(buffer, size);
	com->Write(buffer, size);
	com->Close();

	delete[]buffer;
	delete com;
	delete tcp;
	delete file;

	printf("\n\nPress Enter to quit...");
	getchar();

	return 0;
}

