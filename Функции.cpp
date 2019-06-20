#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;



void a1() {
	for (int i = 0; i < 10; i++) {
		cout << "*";
	}
	cout << endl;
}

void a1(int n) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

void a1(char n) {
	for (int i = 0; i < 5; i++) {
		cout << n;
	}
	cout << endl;
}

int sum(int a, int b)
{
	return a + b;
}

double a3 (int a, int b, int c) {
	double d = (a + b + c) / 3.0;
	return  (d);
}

int a4(int a, int b) {

	if (a > b)
		return a;
	else return b;
}

bool w1(int a) {
	return (a >= 0);
}

bool w2(int a) {
	return (a % 6 == 0);

}

bool w3(int a) {
	return (a <-1);
}

int  pow4(int a) {
	for (int i = 0; i <= a && pow(i, 4) <= a; i++)
		if (pow(i, 4) == a)
			return i;
	return -1;
}

void showarr(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int q1(int a[], int w) {
	int c = 0;
	int max=a[0];
	for (int i = 0; i < w; i++) {
		if (max < a[i])
			max = a[i];
	}
	for (int i = 0; i < w; i++) {
		if (max == a[i])
			c++;
	}
	return c;
}
 
int s1(int a = 0, int s = 0, int d = 0, int f = 0) {
	int sum = a + s + d + f;
	return sum;
}

int kol(int a[], int n) {
	int c = 0, k;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 0)
			c++;
		k = a[i];
		while (k % 10 != 0) {
			c++;
			k /= 10;
		}
	}
	c = c + n - 1;
	return c;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	/*int a;
	cin >> a;
	if (w1(a) == 1)
		cout << "Число >= 0 ";
	else cout << "Число < 0 ";
	cout << endl;
	if (w2(a) == 1)
		cout << "Число кратное 6 ";
	else cout << "Число не кратное ";
	cout << endl;
	if (w3(a) == 1)
		cout << "Число < -1 ";
	else cout << "Число > -1 ";
	cout << endl;
	if (pow4(a) != -1)
		cout << "Число степени 4" << endl;
	else cout << "Число не степени 4" << endl;*/

	int a[5] = { -277,-2,322211,0,5 };
	a1(kol(a, 5));
	showarr(a, 5);
	a1(kol(a, 5));
	system("pause");
}