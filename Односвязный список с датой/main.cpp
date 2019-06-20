#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "Data.h"
#include "Head.h"



using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	// initialize random seed:
	srand(time(NULL));

	Head a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(4);
	a.add(5);
	a.add(6);
	a.echo();

	system("Pause");
}