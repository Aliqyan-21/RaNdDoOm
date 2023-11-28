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
    int size = enc.size();
    pswrdFile << pswrdKey << " : ";
    for(int i = 0; i<size-1;i++){
      ran = makeRandom(0, 2);
		  pswrdFile << enc[i] << sym[ran];
    }
    pswrdFile << '&' << enc[size-1] << endl;
		pswrdFile.close();
	}
}

#endif
