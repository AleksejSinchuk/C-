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

bool Head::add(int data) //���������� ���� ���
{
	if(this->root!=nullptr)//��� �������� �����
	return this->root->add(data); //�������� ������ � ����� ����
	else this->root = new Data(data);
	return true;
}

void Head::echo()
{
	if (this->root != nullptr)
		this->root->echo();

}
