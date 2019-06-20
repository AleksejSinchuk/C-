#include "Data.h"
#include "Head.h"
#include <iostream>
using namespace std;


Data::Data()
{
}

Data::Data(int data)
{
	this->data = data;
}


Data::~Data()
{
}

bool Data::add(int data)
{
	if (this->next != nullptr)
		return this->next->add(data);
	else this->next = new Data(data); 
	return true;
}

void Data::echo()
{
	if (this->next != nullptr)
		this->next->echo();
	 cout << data << endl;
}
