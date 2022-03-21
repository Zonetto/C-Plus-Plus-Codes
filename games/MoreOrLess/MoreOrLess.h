#pragma once
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<time.h>
using namespace std;
typedef class ClassMoreOrLess ClassMore;
class ClassMoreOrLess {
private:
    unsigned int temp;
	unsigned int input;
	unsigned int mix = 0;
	unsigned int min = 1;
public:
	int returnTemp();
	void chack(unsigned int &input);
	void playPrint();
	int gameLevel(int level);

};
enum GAmeLevel {
	LOw = 100, MEdium = 500, HIgh = 1000
};
