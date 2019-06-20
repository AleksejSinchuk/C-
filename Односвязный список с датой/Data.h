#pragma once
#include <iostream>
using namespace std;
class Data
{
public:
	Data();
	Data(int data);
	~Data();



	Data*next;
	int data;



	bool add(int data);
	void echo();
};

