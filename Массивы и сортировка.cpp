#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<vector>
#include<iomanip>
using namespace std;


int asd(int c) {
	int r = c * c;
	cout << r << endl;
}

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int a = 5;
	asd(a);

	system("pause");
}