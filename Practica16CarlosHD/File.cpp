#include "stdafx.h"
#include "File.h"


CFile::~CFile()
{
	printf("\nDestructor ~CFile");
}

void* CFile::Open()
{
	void* result = nullptr;

	printf("\nCFile: Open\n");

	return result;
}

int CFile::Close()
{
	int result = 0;

	printf("\nCFile: Close\n");

	return result;
}

int CFile::Read(char * outputBuffer, unsigned int charactersToRead)
{
	int result = 0;

	printf("\nCFile: Read\n");

	return result;
}

int CFile::Write(const char * inputBuffer, unsigned int inputLength)
{
	int result = 0;

	printf("\nCFile: Write\n");

	return result;
}