#ifndef SAVEPASSWORD_H
# define SAVEPASSWORD_H

#include <iostream>
#include <string>
#include <fstream>

void passwordSave(string password)
{
	fstream pswrdFile;
	string pswrdKey;

	cout << "Enter the tag for your password to identify it: ";
	cin >> pswrdKey;

	pswrdFile.open("passwords.txt", ios::app);

	if(pswrdFile.is_open())
	{
		pswrdFile << pswrdKey << " : " << password << endl;
		pswrdFile.close();
	}
}

#endif
