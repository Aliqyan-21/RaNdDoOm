#include <iostream>
#include <random>
#include <time.h>
#include <algorithm>
using namespace std;

string passwordGenerator(int n)
{
	string password = "";
	const char alphabets[27] = {"abcdefghijklmnopqrstuvwxyz"};
	const char nums[11] = {"1234567890"};
	const char symbols[11] = {"@#$%^&!+=?"};
	
	int prt1 = n/3;
	int prt2 = n/3;
	int prt3 = n - (2*(n/3));

	random_device rd;
    mt19937 gen(rd());
	
	int rand_num;
	for(int i = 0; i < prt3; i++)
	{
		uniform_int_distribution<int> distribution(0, 25);
		rand_num = distribution(gen);
		// rand_num = rand() % 26;

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
		uniform_int_distribution<int> distribution(0, 9);
		rand_num = distribution(gen);
		// rand_num = rand() % 10;

		char x = nums[rand_num];
		password += x;
	}

	for(int i = 0; i < prt1; i++)
	{
		uniform_int_distribution<int> distribution(0, 9);
		rand_num = distribution(gen);
		// rand_num = rand() % 10;

		char x = symbols[rand_num];
		password += x;
	}

	shuffle(password.begin(), password.end(), gen);

	return password;
}

int main()
{
	cout << "Enter length of password(should be 12 or more for strongness): "; 
	int n;
	cin >> n;

	string password = passwordGenerator(n);

	cout << "Password generated is: " << password << endl << "copy and paste it! Thank You!\n";
}
