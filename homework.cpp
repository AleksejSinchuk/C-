#include<iostream>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//int a, b;
	//cout << "Введите количество символов \n";
	//cin >> a;
	//cout << "Выберите 1-горизонтально 2-вертикально \n";
	//cin >> b;
	//switch (b)
	//{
	//case 1:for (int i = 1; i <= a; i++)
	//	cout << "*";
	//	break;
	//case 2:for (int i = 1; i <= a; i++)
	//	cout << "*" << " \n";
	//	break;
	//default:cout << "Не верно введено число \n";
	//	break;
	//}
	//system("pause");

	/*int q, w,sum,e,r;
	cout << "Введите диапазон из 2-х чисел \n";
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
	cout <<"Сумма нечетных чисел "<< sum << endl;
	system("pause");*/

	/*int n, pr;
	cout << "Введите n \n";
	cin >> n;
	pr = 1;
	if (n == 0)
		cout << "n=0 \n";
	for (int i = 1; i <= n; i++)
		pr *= i;
	cout << n << "! = " << pr << endl;
	system("pause");*/



	/*int z, x,summ;
	cout << "Введите длину ткани \n";
	cin >> z;
	cout << "Введите длину подушки \n";
	cin >> x;
	summ = 0;
	if (z <= 0 || x <= 0)
		cout << "Данные введены не верно \n";
	while (z>=x)
	{
		z = z - x;
		summ++;
	}
	cout << "Количество подушек " << summ << endl;
	system("pause");*/

	int b, l, k, m;
	cout << "Введите количество ящиков на складе \n";
	cin >> b;
	k = 0;
	l = 0;
	do
	{
		cout << "Введите сколько ящиков забрали \n";
		cin >> m;
		l+= m;
		k ++;
	} while (l < b);
	cout << "Машина подехала " << k << " раз \n";
	


	system("pause");
}