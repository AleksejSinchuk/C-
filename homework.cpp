#include<iostream>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//int a, b;
	//cout << "������� ���������� �������� \n";
	//cin >> a;
	//cout << "�������� 1-������������� 2-����������� \n";
	//cin >> b;
	//switch (b)
	//{
	//case 1:for (int i = 1; i <= a; i++)
	//	cout << "*";
	//	break;
	//case 2:for (int i = 1; i <= a; i++)
	//	cout << "*" << " \n";
	//	break;
	//default:cout << "�� ����� ������� ����� \n";
	//	break;
	//}
	//system("pause");

	/*int q, w,sum,e,r;
	cout << "������� �������� �� 2-� ����� \n";
	cin >> q >> w;
	sum = 0;
	if (q > w) {
		r = q;
		e = w;
	}
	else {
		r = w;
		e = q;
	}
	for (; e <= r; e++) {
		if (e % 2 != 0)
			sum = sum + e;
	}
	cout <<"����� �������� ����� "<< sum << endl;
	system("pause");*/

	/*int n, pr;
	cout << "������� n \n";
	cin >> n;
	pr = 1;
	if (n == 0)
		cout << "n=0 \n";
	for (int i = 1; i <= n; i++)
		pr *= i;
	cout << n << "! = " << pr << endl;
	system("pause");*/



	/*int z, x,summ;
	cout << "������� ����� ����� \n";
	cin >> z;
	cout << "������� ����� ������� \n";
	cin >> x;
	summ = 0;
	if (z <= 0 || x <= 0)
		cout << "������ ������� �� ����� \n";
	while (z>=x)
	{
		z = z - x;
		summ++;
	}
	cout << "���������� ������� " << summ << endl;
	system("pause");*/

	int b, l, k, m;
	cout << "������� ���������� ������ �� ������ \n";
	cin >> b;
	k = 0;
	l = 0;
	do
	{
		cout << "������� ������� ������ ������� \n";
		cin >> m;
		l+= m;
		k ++;
	} while (l < b);
	cout << "������ �������� " << k << " ��� \n";
	


	system("pause");
}