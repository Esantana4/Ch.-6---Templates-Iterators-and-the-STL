#pragma once
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

char inputChar(string prompt, string options);
void mainMenu();
int inputInteger(string prompt);
int inputInteger(string prompt, int startRange, int endRange);

//Pre-Condition: 
//Post-Condition: 
class MyBag
{
private:
	vector<int> myBag;
	int* size;
	int* capacity;

public:
	MyBag(); // No Argument Constructor
	MyBag(int newSize, int newCapacity); // Argument Constructor
	~MyBag(); // Destructor
	
	void setSize(int newSize); // Setter(Mutator)
	int getSize() const; // Getter(Accessor)

	void setCapacity(int newCapacity); // Setter(Mutator)
	int getCapacity() const; // Getter(Accessor)

	void subMenu(); // Logic and main MyBag function
};

