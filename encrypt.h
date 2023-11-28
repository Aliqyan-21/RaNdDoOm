#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <iostream>
#include <random>
#include "random.h"
using namespace std;

vector <int> encrypt(string password){
  int rand_num = makeRandom(17, 200);

  vector <int> enc;

  for (int i = 0; i < password.size(); i++) {
    int x = password[i] + rand_num;
    enc.push_back(x);
  }
  /* enc.push_back(0); */
  enc.push_back(rand_num);

  return enc;
}

#endif
