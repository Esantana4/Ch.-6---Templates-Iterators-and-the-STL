#pragma once
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

char inputChar(string prompt, string options);
void mainMenu();
int inputInteger(string prompt);
int inputInteger(string prompt, int startRange, int endRange);

class MyBag
{
private:
	vector<int> myBag;

public:

	void subMenu();
	//void clear();

};

