#include<iostream>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int a,a1,a2,a3,a4,a5,a6;
	cout << "������� 6-� ������� ����� \n";
	cin >> a;
	if (a >= 100000 && a < 1000000||a<=-100000&&a>-1000000) {
		a6 = a % 10;
		a = a/10;
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
			cout << "����� ���������� \n";
		else cout << "����� �� ���������� \n ";
	}
	else cout << "�� ����� �� 6-� ������� ����� \n";

	system("pause");


	/*int b, b1, b2, b3, b4;
	cout << "������� �������������� ����� \n";
	cin >> b;
	if (b >= 1000 && b <= 9999||b<=-1000&& b>=-9999) {
		b4 = b % 10;
		b3 = (b / 10) % 10;
		b2 = (b / 100) % 10;
		b1 = (b / 1000);
		cout << b2 << b1 << b4 << b3 << endl;
	}
	else cout << "�� ����� �� ������ ����� \n";
	system("pause");*/

	/*int q1, q2, q3, q4, q5, q6, q7,q;
	cout << "������� 7 ����� \n";
	cin >> q1 >> q2 >> q3 >> q4 >> q5 >> q6 >> q7;
	(q1 >= q2) ? q = q1 : q = q2;
	(q <= q3) ? q = q3 : q + 0;
	(q <= q4) ? q = q4 : q + 0;
	(q <= q5) ? q = q5 : q + 0;
	(q <= q6) ? q = q6 : q + 0;
	(q <= q7) ? q = q7 : q + 0;
	cout << q << endl;
	system("pause");*/

	/*
		int kg,s,ab,bc,r,zb,zc,razn;
		const int r1 = 1, r2 = 4, r3 = 7, r4 = 9;
		cout << "������� ����� ����� � �� \n";
		cin >> kg;
		cout << "������� ���������� �� � �� � � �� � �� � \n";
		cin >> ab >> bc;
		(kg > 0 && kg <= 500) ? s = 300 / 1 : 0;
		(kg > 500 && kg <= 1000) ? s = 300 / 4 : 0;
		(kg > 1000 && kg<= 1500) ? s = 300 / 7 : 0;
		(kg > 1500 && kg <= 2000) ? s = 300 / 9 : 0;
		(kg > 2000) ?  s= 0 : 0;
		cout << " �� ������ �������� ������� �������� �������� "<< s << " �� \n";
		if (s == 0)cout << "��������. ������� �� �������";
		if (ab > s)
			cout << "������� �� ������� �� ����� � \n";
		else if(bc>s)
			cout << "������� �� ������� �� ����� C \n";
			else
			(kg > 0 && kg <= 500) ? r = r1 : 0;
			(kg > 500 && kg <= 1000) ? r=r2: 0;
			(kg > 1000 && kg <= 1500) ? r=r3 : 0;
			(kg > 1500 && kg <= 2000) ? r=r4 : 0;
			zb = 300 - ab * r;
			cout << "� ���� �������� " << zb << " ������ ������� � ����� � \n";
			zc = bc * r;
			if (zc > zb) {
				razn = zc - zb;
				cout << "����� ����������� " << razn << " ������ \n";
			}

			else cout << "���������� �� ����� \n";

			system("pause");*/
/*
	int day1, day2, month1, month2, year1, year2, sum, sum2;
	cout << "������ ���� ������ ���� ������ ��� ������ \n";
	cout << "������� ������ ����� \n";
	cin >> day1 >> month1 >> year1;
	cout << "������� ������ ���� \n";
	cin >> day2 >> month2 >> year2;
	if (year1 > year2 || year1 == year2 && month1 > month2 || year1 == year2 && month1 == month2 && day1 > day2) {
		cout << "������ ������� �� ����� \n";
	}
	 else if (day1 <= 0 || day1 >32 || day2 <= 0 || day2>32 || month1 <= 0|| month1>25 || month2 <= 0|| month2>25 || year1 <= 0 || year2 <= 0)
	{
		cout << "�� ����� ������� ���� \n ";
	}
	else {
		const int m1 = 31, m3 = 31, m4 = 30, m5 = 31, m6 = 30, m7 = 31, m8 = 31, m9 = 30, m10 = 31, m11 = 30, m12 = 31;
		int m2;
		if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
			m2 = 29;
		else m2 = 28;
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
		if (year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0)
			m2 = 29;
		else m2 = 28;
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
				if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)
					qwe = 366;
				else qwe = 365;
				all = all + qwe;
			}
			all = all + sum + sum2;
		}

		cout << "���� ����� ������: " << all << endl;
	}

	system("pause");*/

//double a1, a2, a3;
//cout << "������� ������� ������ ��� 3-� ���������� \n";
//cin >> a1 >> a2 >> a3;
//if (a1 < 0 || a2 < 0 || a3 < 0) cout << "�� ����� ������� ������ \n";
//else {
//	const int zp = 200;
//	(a1 < 500) ? a1 = zp + a1 * 3 / 100 : (a1 >= 500 && a1 < 1000) ? a1 = zp + a1 * 5 / 100 : a1 = zp + a1 * 8 / 100;
//	(a2 < 500) ? a2 = zp + a2 * 3 / 100 : (a2 >= 500 && a2 < 1000) ? a2 = zp + a2 * 5 / 100 : a2 = zp + a2 * 8 / 100;
//	(a3 < 500) ? a3 = zp + a3 * 3 / 100 : (a3 >= 500 && a3 < 1000) ? a3 = zp + a3 * 5 / 100 : a3 = zp + a3 * 8 / 100;
//	cout << "1-� �������� ��������� " << a1 << endl;
//	cout << "2-� �������� ��������� " << a2 << endl;
//	cout << "3-� �������� ��������� " << a3 << endl;
//	if (a1 == a2 && a1 > a3 || a1 == a3 && a1 > a2 || a2 == a3 && a2 < a1)
//		cout << " ������� ��������� ��� \n";
//	else if (a1 > a2&&a1 > a3)
//		cout << "������ 1-� �������� � ��� ��������� � ������� " << a1 + 200 << endl;
//	else if (a2>a3)
//		cout << "������ 2-� �������� � ��� ��������� � ������� " << a2 + 200<<endl;
//	else cout << "������ 3-� �������� � ��� ��������� � ������� " << a3 + 200<<endl;
//}
//	system("pause");
//}