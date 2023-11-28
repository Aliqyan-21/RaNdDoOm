#include <iostream>
#include <string>
#include "generator.h"
#include "savePassword.h"
#include "encrypt.h"
#include "decrypt.h"
using namespace std;

int main()
{
	while(1){
    int option;
    cout << "\n1. Generate Password\n2. Decrypt Saved Password\n0. Exit\n\nEnter Your Choice[1/2/0]: ";
    cin >> option;
    if(option == 1){
	    cout << "Enter length of password(should be 12 or more for strongness): "; 
	    int n;
	    cin >> n;

	    string password = passwordGenerator(n);

	    cout << "Password generated is: " << password << endl;

	    char choice;
		  cout << "Do you want to save password in a passwords.txt file[y/n]: ";
		  cin >> choice;

		  if(choice == 'Y' || choice == 'N') choice += 32;

		  if(choice == 'y'){
        vector <int> enc = encrypt(password);
		  	passwordSave(enc);
		  	continue;
		  }

		  else if(choice == 'n'){
		  	cout << "Thank you, copy and paste the password to use it\n"; 
		  	continue;
		  }

		  else{
		  	cout << "Enter a valid command [y/n]\n";
		  }
    }

    if(option == 2){
      string dec_key;
      cout << "Enter key to decrypt: ";
      cin >> dec_key;
      dec_key += " ";
      string s = decrypt(dec_key);
      if(s == "Err"){
        cout << "Key not found -> Error-404!\n";
      }
      else{
        cout << "Your password for " << dec_key << " is : " << s << endl;
      }
      continue;
    }

    if(option == 0){
      cout << "Exiting..." << endl;
      break;
    }
	}
	return 0;
}
