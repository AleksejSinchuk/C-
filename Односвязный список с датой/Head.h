#pragma once
#include "Data.h"
#include <iostream>
class Head
{
public:
	Head();
	~Head();


	Data *root;



	bool add(int data);
	void echo();
};

