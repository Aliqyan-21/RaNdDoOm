#include <iostream>
#include "generator.h"
#include "savePassword.h"
using namespace std;

int main()
{
	cout << "Enter length of password(should be 12 or more for strongness): "; 
	int n;
	cin >> n;

	string password = passwordGenerator(n);

	cout << "Password generated is: " << password << endl;

	char choice;

	while(1)
	{
		cout << "Do you want to save password in a passwords.txt file[y/n]: ";
		cin >> choice;

		if(choice == 'Y' || choice == 'N') choice += 32;

		if(choice == 'y')
		{
			passwordSave(password);
			break;
		}

		else if(choice == 'n')
		{
			cout << "Thank you, copy and paste the password to use it\n"; 
			break;
		}

		else 
		{
			cout << "Enter a valid command [y/n]\n";
		}
	}
	
	return 0;
}
