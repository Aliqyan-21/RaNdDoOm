#include <iostream>
#include "generator.h"
using namespace std;

int main()
{
	cout << "Enter length of password(should be 12 or more for strongness): "; 
	int n;
	cin >> n;

	string password = passwordGenerator(n);

	cout << "Password generated is: " << password << endl << "copy and paste it! Thank You!\n";
	
	return 0;
}
