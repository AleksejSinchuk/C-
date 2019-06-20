#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	/*int a1, a2, q1, q2,c=0;
	for (int i = 0; i <= 23; i++) {
		for (int j = 0; j < 60; j++) {
			a1 = i / 10;
			a2 = i % 10;
			q1 = j / 10;
			q2 = j % 10;
			if (a1 == q2&&a2 == q1)
				c++;
		}
	}
	cout << c << "\n";


	system("pause");*/

	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		if (i == j || i > j) //Есди i<j выведит пирамиду наоборот
	//			cout << "*";
	//		else cout << " ";
	//	}
	//	cout << endl;
	//}
	//system("pause");

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <5- i - 1; j++) {
			cout << " ";
		}
			for (int j = 0; j < i + 1; j++) {
				cout << "*";
			}

		cout << endl;
	}
	system("pause");*/


	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < i*2 + 1; j++) {
			cout << "*";
		}

		cout << endl;
	}
	system("pause");
*/

	//Число Армстронга
	//int n,n1,n2,sum,m;
	//cin >> n;
	//n1 = pow(10, n - 1);
	//n2 = pow(10, n);
	//for (int i = n1; i < n2; i++) {
	//	sum = 0;
	//	m = i;
	//	while (m > 0) {
	//		sum += pow(m % 10, n);
	//		m /= 10;
	//	}
	//	if (i == sum)
	//		cout << i << endl;
	//}
	//system("pause");

	
	/*int a[5],sum,c=0;
	sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] % 2 == 0)
			c++;
	}

	cout << c;

	system("pause");*/

	/*int c = 0;
	int a[] = { 0,0,0,1,0 };
	for (int i = 0; i < 5; i++) {
		if (a[i] == 1)
			cout << i << "\n";
		if (a[i] == 0)
			c++;

	}
	cout << c;
	system("pause");*/

	/*int a[] = { -1,-4,-6,-8,-9,-3,-8 };
	int q=0;
	for (int i=0; i < 7; i++) {
		if (a[i] < a[i+1])
			q = a[i];
	}
	cout << q;
	system("pause");*/



//Разобратся с индексами
//int a[] = { 3,5,7,5,0 };
//int q = a[0]; 
//int w = a[0];
//imax
//for (int i = 0; i < 5; i++) {
//	if (a[i] < q)
//		q = a[i];
//	cout << q<<endl;
//}
//for (int i = 0; i < 5; i++){
//	if (a[i] > w)
//		w = a[i];
//	cout << a[i]<<endl;
//}
//swap(q, w);
//for (int i = 0; i < 5; i++)
//	cout << a[i];
//system("pause");



//int a[] = { 3,4,8,3,6 };
//int b[5];
//int q,c=0;
//for (int i = 0; i < 5; i++) {
//	q = a[i];
//	if (q % 2 == 0) {
//		b[c++] = q;
//	}
//}
//for (int i = 0; i < 5; i++)
//	cout << b[i] << " ";
//system("pause");

int a[100];
for (int i = 0; i < 100; i++) {
	a[i] = rand()%10-5;
	cout << a[i] << " ";
}

system("pause");
}