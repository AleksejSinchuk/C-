#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<vector>
#include<iomanip>
using namespace std;



float F_Pow(float a, float b) {
	return (pow(a, b));
}

int sum(int a, int b) {
	int q, w,sum=0;
	if (a > b) {
		q = b;
		w = a;
	}
	else {
		q = a;
		w = b;
	}
	for (int i = q + 1; i < w; i++) {
		sum += i;
	}
	return sum;
}

void sov_ch(int a,int b ) {
	int sum = 0,q,w;
	if (b < a) {
		q = a;
		w = b;
		b = q;
		a = w;
	}
	while (a < b)
	{
		sum = 0;
		for (int i = 1; i < a; i++) {
			if (a%i == 0)
				sum += i;
		}
		if (sum == a)
			cout << "Число " << a << " совершенное" << endl;
		a++;
	}
	
}

void karta() {
	char mas[10][9];
	int mast, karta;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 9; j++) {
			mas[i][j] =' ';
		}
	}
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 9; j++) {
			mas[0][j] = '*';
			mas[i][0] = '*';
			mas[i][8] = '*';
			mas[10][j] = '*';
		}
	}
	cout << "Выберите карту : \n 6 - 6 \n 7 - 7 \n 8 - 8 \n 9 - 9 \n 10 - 10 \n B - 11 \n D - 12 \n K - 13 \n T - 14 \n";
	cin >> karta;
	cout << "Выберите масть : 1-пики  2-трефы  3-червы  4-бубны " << endl;
	cin >> mast;
	switch (karta)
	{
	case 6:mas[1][1] = '6', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = '6'; break;
	case 7:mas[1][1] = '7', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = '7'; break;
	case 8:mas[1][1] = '8', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = '8'; break;
	case 9:mas[1][1] = '9', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = '9'; break;
	case 10:mas[1][1] = '1', mas[1][2] = '0', mas[9][6] = '1', mas[9][7] = '0'; break;
	case 11:mas[1][1] = 'B', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = 'B'; break;
	case 12:mas[1][1] = 'D', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = 'D'; break;
	case 13:mas[1][1] = 'K', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = 'K'; break;
	case 14:mas[1][1] = 'T', mas[1][2] = ' ', mas[9][6] = ' ', mas[9][7] = 'T'; break;
	default:cout << "Такой карты нет " << endl;
		break;
	}
	switch (mast)
	{
	case 1:mas[2][4] = '*', mas[3][3] = '*', mas[3][5] = '*', mas[4][2] = '*', mas[4][6] = '*', mas[5][2] = '*', mas[5][6] = '*', mas[5][4] = '*', mas[6][3] = '*', mas[6][5] = '*', mas[7][4] = '|', mas[8][3] = '-', mas[8][4] = '-', mas[8][5] = '-'; break;
	case 2:mas[6][2] = '*', mas[5][1] = '*', mas[4][2] = '*', mas[3][3] = '*', mas[2][4] = '*', mas[3][5] = '*', mas[4][6] = '*', mas[5][7] = '*', mas[6][6] = '*', mas[5][3] = '-', mas[5][5] = '-', mas[8][3] = '-', mas[8][4] = '-', mas[8][5] = '-', mas[4][4] = '|', mas[5][4] = '|', mas[6][4] = '|', mas[7][4] = '|' ; break;
	case 3:mas[3][3] = '*',mas[4][2] = '*',mas[5][2] = '*',mas[6][3] = '*',mas[7][4] = '*',mas[6][5] = '*',mas[5][6] = '*',mas[4][6] = '*',mas[3][5] = '*',mas[4][4] = '*'; break;
	case 4:mas[3][4] = '*', mas[4][3] = '*', mas[5][2] = '*', mas[6][3] = '*', mas[7][4] = '*', mas[6][5] = '*', mas[5][6] = '*', mas[4][5] = '*' ; break;
	default:cout << "Такой масти нет" << endl;
		break;
	}

	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 9; j++) {
			cout<<mas[i][j];
		}
		cout << endl;
	}
}

void schast(int a) {
	int  a1, a2, a3, a4, a5, a6;
	if (a >= 100000 && a < 1000000 || a <= -100000 && a>-1000000) {
		a6 = a % 10;
		a = a / 10;
		a5 = a % 10;
		a = a / 10;
		a4 = a % 10;
		a = a / 10;
		a3 = a % 10;
		a = a / 10;
		a2 = a % 10;
		a = a / 10;
		a1 = a;
		if (a1 + a2 + a3 == a4 + a5 + a6)
			cout << "Число счастливое \n";
		else cout << "Число не счастливое \n ";
	}
	else cout << "Вы ввели не 6-и значное число \n";
}


int year(int a) {
	int b;
	(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) ? b = 1 : b = 0;
	return b;
}

void days(int day1,int  month1,int year1, int day2,int  month2,int year2) {
	int sum, sum2;
	if (year1 > year2 || year1 == year2 && month1 > month2 || year1 == year2 && month1 == month2 && day1 > day2) {
		cout << "Данные введены не верно \n";
	}
	else if (day1 <= 0 || day1 > 32 || day2 <= 0 || day2 > 32 || month1 <= 0 || month1 > 25 || month2 <= 0 || month2 > 25 || year1 <= 0 || year2 <= 0)
	{
		cout << "Не верно введены даты \n ";
	}
	else {
		const int m1 = 31, m3 = 31, m4 = 30, m5 = 31, m6 = 30, m7 = 31, m8 = 31, m9 = 30, m10 = 31, m11 = 30, m12 = 31;
		int m2;
		m2 = 28 + year(year1);
		switch (month1)
		{
		case 1:sum = (m1 - day1 + 1) + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 2:sum = (m2 - day1 + 1) + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 3:sum = (m3 - day1 + 1) + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 4:sum = (m4 - day1 + 1) + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 5:sum = (m5 - day1 + 1) + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 6:sum = (m6 - day1 + 1) + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 7:sum = (m7 - day1 + 1) + m8 + m9 + m10 + m11 + m12; break;
		case 8:sum = (m8 - day1 + 1) + m9 + m10 + m11 + m12; break;
		case 9:sum = (m9 - day1 + 1) + m10 + m11 + m12; break;
		case 10:sum = (m10 - day1 + 1) + m11 + m12; break;
		case 11:sum = (m11 - day1 + 1) + m12; break;
		case 12:sum = (m12 - day1 + 1); break;
		}
		m2 = 28 + year(year1);
		switch (month2)
		{
		case 1:sum2 = (m1 - day2 + 1) + m2 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 2:sum2 = (m2 - day2 + 1) + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 3:sum2 = (m3 - day2 + 1) + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 4:sum2 = (m4 - day2 + 1) + m5 + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 5:sum2 = (m5 - day2 + 1) + m6 + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 6:sum2 = (m6 - day2 + 1) + m7 + m8 + m9 + m10 + m11 + m12; break;
		case 7:sum2 = (m7 - day2 + 1) + m8 + m9 + m10 + m11 + m12; break;
		case 8:sum2 = (m8 - day2 + 1) + m9 + m10 + m11 + m12; break;
		case 9:sum2 = (m9 - day2 + 1) + m10 + m11 + m12; break;
		case 10:sum2 = (m10 - day2 + 1) + m11 + m12; break;
		case 11:sum2 = (m11 - day2 + 1) + m12; break;
		case 12:sum2 = (m12 - day2 + 1); break;
		}
		int all = 0;
		if (year1 == year2) {
			all = sum - sum2;
		}
		if (year1 != year2) {
			year1 = year1 + 1;
			year2 = year2 - 1;
			int qwe;
			for (; year1 <= year2; year1++) {
					qwe = 365 + year(year1);
				all = all + qwe;
			}
			all = all + sum + sum2;
		}

		cout << "Дней между датами: " << all << endl;
	}
}

double sredn(int mas[], int a) {
	double b=0;
	for (int i = 0; i < a; i++) {
		b += mas[i];
	}
	b = b / a*1.0;
	return b;
}

void mass(int mas[], int a) {
	int pol=0, otr=0, nol=0;
	for (int i = 0; i < a; i++) {
		(mas[i] < 0) ? otr++ : 0;
		(mas[i] > 0) ? pol++ : 0;
		(mas[i] == 0) ? nol++ : 0;
	}
	cout << "Отрицательных " << otr << endl;
	cout << "Положительных " << pol << endl;
	cout << "Нулевых " << nol << endl;
}


int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int arr[9] = { 0,0,0,1,5,-9,-7,-8,-8 };
	system("pause");

}

