#ifndef RANDOM_H
#define RANDOM_H

#include <random>
using namespace std;

int makeRandom(int a, int b){
  random_device rd;
  mt19937 gen(rd());
	uniform_int_distribution<int> distribution(a, b);
  int rand_num = distribution(gen);
  return rand_num;
}

#endif
