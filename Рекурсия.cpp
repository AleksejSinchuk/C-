#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<vector>
#include<iomanip>
#include "ARRAYS.h"
using namespace std;




int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int mass[10];
	InArr(mass, 10);
	ShowArr(mass, 10);


	system("pause");
	
}

