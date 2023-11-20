#include <iostream>
#include <random>
#include <time.h>
using namespace std;

string password_generator(int n)
{
	string password = "";
	const char alphabets[27] = {"abcdefghijklmnopqrstuvwxyz"};
	const char nums[11] = {"1234567890"};
	const char symbols[11] = {"@#$%^&!+=?"};
	
	int prt1 = n/3;
	int prt2 = n/3;
	int prt3 = n - (2*(n/3));
	
	int rand_num;
	for(int i = 0; i < prt3; i++)
	{
		rand_num = rand() % 26;

		if(i <= (prt1/3))
		{
			char x = alphabets[rand_num];
			x-=32;
			password += x;
		}
		else 
		{
			char x = alphabets[rand_num];
			password += x;
		}
	}

	for(int i = 0; i < prt2; i++)
	{
		rand_num = rand() % 10;

		char x = nums[rand_num];
		password += x;
	}

	for(int i = 0; i < prt1; i++)
	{
		rand_num = rand() % 10;

		char x = symbols[rand_num];
		password += x;
	}

	return password;
}

int main()
{
	srand(time(0));
	int n;
	cin >> n;

	string password = password_generator(n);

	cout << password << endl;
}
