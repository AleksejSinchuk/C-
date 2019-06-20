#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int a[4][4];
	int c = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i + j == c)
				a[i][j] = c;
			c++
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
system("pause");
}