#include "Head.h"
#include "Data.h"
#include <iostream>
using namespace std;

Head::Head()
{
}


Head::~Head()
{
}

bool Head::add(int data) //Вызывается один раз
{
	if(this->root!=nullptr)//для проверки корня
	return this->root->add(data); //передает работу в класс Дата
	else this->root = new Data(data);
	return true;
}

void Head::echo()
{
	if (this->root != nullptr)
		this->root->echo();

}
