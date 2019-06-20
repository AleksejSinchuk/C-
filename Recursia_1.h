#pragma once
using namespace std;


//Наибольший делитель двух чисел

//int delitel(int a, int b) {
//	if (b == 0)
//		return a;
//	if(a>b)
//		return delitel(b, a% b);
//	else
//		return delitel( a, b% a);
//}

//Игра коровы быки

//int cows1() {
//	int b = rand() % 9999 + 1000;
//	return b;
//}
//int cows(int c){
//	static int p = 0;
//	p++;
//	int b, b1, b2, b3, b4;
//	b = c;
//	b4 = b % 10;
//	b = b / 10;
//	b3 = b % 10;
//	b = b / 10;
//	b2 = b % 10;
//	b = b / 10;
//	b1 = b;
//	int a, a1, a2, a3, a4;
//	cout << "ведите 4-ч значное число " << endl;
//	cin >> a;
//	a4 = a % 10;
//	a = a / 10;
//	a3 = a % 10;
//	a = a / 10;
//	a2 = a % 10;
//	a = a / 10;
//	a1 = a;
//	if (a1 == b1 && a2 == b2 && a3 == b3 && a4 == b4) {
//		cout << " Игра окончена, количество попыток "<<p<< endl;
//		return 0;
//	}
//	int e = 0, q = 0;
//	(a1 == b1) ? e++ : 0;
//	(a2 == b2) ? e++ : 0;
//	(a3 == b3) ? e++ : 0;
//	(a4 == b4) ? e++ : 0;
//	(a1 == b1 || a1 == b2 || a1 == b3 || a1 == b4) ? q++ : 0;
//	(a2 == b1 || a2 == b2 || a2 == b3 || a2 == b4) ? q++ : 0;
//	(a3 == b1 || a3 == b2 || a3 == b3 || a3 == b4) ? q++ : 0;
//	(a4 == b1 || a4 == b2 || a4 == b3 || a4 == b4) ? q++ : 0;
//	cout <<"Цифр числа угадано " << q << endl;
//	cout<<"Цифр угадано и стоит на нужном месте "<< e << endl;
//	return cows(c);
//}
//
//

//ходы конем

//const int size = 8;
//int mas[8] = {};
//int masx[] = { 1,2,2,1,-1,-2,-2,-1 };
//int masy[] = { 2,1,-1,-2,-2,-1,1,2 };
//void print(int mas[][8]) {
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			cout << setw(3) << mas[i][j];
//		}
//		cout << endl;
//	}
//	system("pause");
//}
//
//void horse(int mas[][8], int num, int i0, int j0) {
//	mas[i0][j0] = num++;
//	for (int i = 0; i < 8; i++) {
//		int inew = i0 + masy[i];
//		int jnew = j0 + masx[i];
//
//		if (num > 64) {
//			print(mas);
//			exit(0);
//		}
//		if (inew < 0 || inew>7 || jnew < 0 || jnew>7 || mas[inew][jnew] != 0)
//			continue;
//		horse(mas, num, inew, jnew);
//		mas[inew][jnew] = 0;
//	}
//}

//Линия из звезд

//double  POW(double a, double b) {
//	if (!b) 
//		return 1;
//		if (b > 0) 
//			return a * POW(a, b - 1);
//		else return 1 / (a*POW(a, (b*(-1) - 1)));	
//}
//
//int Line1(){
//	cout << "Введите количество звезд в линии " << endl;
//	int a;
//	cin >> a;
//	return a;
//}
//
//void Line(int kol) {
//	if (kol == 0) {
//		cout << endl;
//		system("pause");
//		exit(0);
//	}
//	 cout << "*";
//	return Line(kol - 1);
//
//}

//Сумма между двумя числами

//int sum(int a,int b) {
//	if (a == b)
//		return a;
//	int k;
//	k = a;
//	if (a < b)
//		return k + sum(a + 1, b);
//	else return k + sum(a - 1, b);
//}

//Сумма 10 мин чмсел в массиве

//int SUM10(int mass[],int N,int k, int q) {
//	int sum1=0, sum2=0;
//	if (q == 91)
//		return k;
//	for (int i = k; i < k + 9; i++) {
//		 sum1 += mass[i];
//	}
//	for (int i = q; i < q + 9; i++) {
//		sum2 += mass[i];
//	}
//	if (sum2 < sum1) {
//		k = q;
//	}
//	return SUM10(mass, 100, k, q + 1);
//}