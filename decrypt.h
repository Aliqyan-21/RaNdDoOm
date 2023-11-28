#ifndef DECRYPT_H
#define DECRYPT_H

#include <iostream>
#include <random>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

string decrypt(string key){
  fstream pswrdFile;
  int rand_num = 0;
  vector <int> dec;

  pswrdFile.open("passwords.txt", ios::in);

  if(pswrdFile.is_open()){
    string lines;
    string line;
    while(getline(pswrdFile, lines)){
      line = lines;
      int i = 0;
      string s = "";
      char hit = line[i];
      while(hit != ':'){
        s+=line[i];
        i++;
        hit = line[i];
      }

      i+=2;
      char e = line[i];
      if(key == s){
        int tmp = 0;

        while(1){
          if(e == '&'){
            i++;
            e = line[i];
            while(e != '\0'){
            rand_num = rand_num*10 + (e - 48);
            i++;
            e = line[i];
            }
            dec.push_back(rand_num);
            break;
          }
          else if(e != '@' && e != '#' && e != '$'){
            tmp = tmp*10 + (e - 48);
            i++;
            e = line[i];
            continue;
          }
          else if(e == '@' || e == '#' || e == '$'){
            dec.push_back(tmp);
            tmp = 0;
            i++;
            e = line[i];
          }
          else{
            i++;
            e = line[i];
            continue;
          }
        }
      }
      else{
        continue;
      }
    }
  }
  string decrypted = "";
  if(dec.size() != 0){
    for(int val : dec){
      char x = val - rand_num;
      decrypted+=x;
    }
    return decrypted;
  }
  else{
    return "Err";
  }
}

#endif
