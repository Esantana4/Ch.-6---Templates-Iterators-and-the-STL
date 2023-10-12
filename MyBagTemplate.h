#pragma once
#include<iostream>
#include <algorithm>
using namespace std;

char inputChar(string prompt, string options);
void mainMenu();
int inputInteger(string prompt);
int inputInteger(string prompt, int startRange, int endRange);
double inputDouble(string prompt);

template <typename T>
class MyBagTemplate;

//Template class MyBag for dynamic array
template<typename T>
class MyBagTemplate {
private:
	T* data;
	int size;
	int capacity;
public:

	//Functions to interact with the bag
	void add(double value);
	void clear();
	bool contains(double value) const;
	void ensureCapacity(int newCapacity);

	//defualt constructor
	MyBagTemplate();
	//constructor
	MyBagTemplate(int newCapacity);
	//destructor
	~MyBagTemplate();

	//getters(accesors)
	int getSize() const;
	//int getCapacity() const;

	//setters(mutators)
	void setSize(int newSize);
	//void setCapacity(int newCapacity);

	// Menu
	void subMenu();

	//overloading operators
	bool operator<(const MyBagTemplate<T>& obj)const;
	T& operator[](int index);
	const T& operator[](size_t index) const;
	friend ostream& operator<<(ostream& out, const MyBagTemplate<T>& bag);

};