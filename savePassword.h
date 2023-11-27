#ifndef SAVEPASSWORD_H
#define SAVEPASSWORD_H

#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <vector>
#include "random.h"

void passwordSave(vector<int>enc){
	fstream pswrdFile;
	string pswrdKey;

	cout << "Enter the tag for your password to identify it: ";
	cin >> pswrdKey;

	pswrdFile.open("passwords.txt", ios::app);

  vector <char> sym = {'@', '#', '$'};

  int ran;
	if(pswrdFile.is_open())
	{
    pswrdFile << pswrdKey << " : ";
    for(int val : enc){
      ran = makeRandom(0, 2);
		  pswrdFile << val << sym[ran];
    }
		pswrdFile.close();
	}
}

#endif
