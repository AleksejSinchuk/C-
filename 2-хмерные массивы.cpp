#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	//Для маленьких массивов
	/*int a [5] = { 3,9,8,5,4 };
	int t;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4-j; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
system("pause");*/

//Многомерные массивы
	/*int m = 4;
	int n = 3;
	int a[m][n];
	for (int i = 0; i < m*n;i++ ) {
		cout << a[i / n][i%n];
		if (i%n == 3)
			cout << endl;
	}


system("pause"); */

	
	//const int n = 3;
	//int a[n][n];
	//int b[n][n];
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		a[i][j] = rand() % 10;
	//		cout << a[i][j] << " ";
	//			b[j][i] = a[i][j];
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << b[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n - i; j++) {
	//		swap(a[i][j], a[n - 1 - j][n - 1 - i]);
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//system("pause");

	//const int n = 5;
	//int a[n][n];
	//int b[n][n];
	//int min, max,k,q;
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		a[i][j] = rand() % 10;
	//		cout << a[i][j] << " ";
	//			b[j][i] = a[i][j];
	//	}
	//	cout << endl;
	//}
	//max = a[0][0];
	//min = a[0][0];
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		(max < a[i][j]) ? max = a[i][j],k=i : 0;
	//		(min > a[i][j]) ? min = a[i][j],q=i : 0;
	//	}
	//}
	//cout << endl;
	//cout << k << " " << q;
	//cout << endl;
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//	swap(a[q][j], a[k][j]);
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//system("pause");

	
}