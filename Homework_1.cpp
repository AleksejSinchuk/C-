#include<iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "����� - ���� ����� - ������� ���� \n";
	cout << "���� ������ ������ ����, \n"
		<< "�� ��� ������� �������� �����. \n"
		<< "�� ���������, ��� ����� �����,\n"
		<< "����� ��� �� ��������� �� ����. \n";
	system("pause");


	cout << "������ ������� ������ �����, ��� ����� �����\n";
	cout << "\t������\n"
		<< "\t\t�������\n"
		<< "\t\t\t������\n"
		<< "\t\t\t\t�����\n"
		<< "\t\t\t\t\t���\n"
		<< "\t\t\t\t\t\t�����\n"
		<< "\t\t\t\t\t\t \t�����\n";
	system("pause");

	cout << "������ ���������� \n"
		<< "����� � �����������: ��� 2109 \n"
		<< "�����: 1300 ��3 \n"
		<< "��������: 64 �.�.\n"
		<< "��� �������: 1993 \n"
		<< "���� ���������� \n"
		<< "���: 093 93 12 111 \n";
	cout << "___________________________________________\n";
	cout << "\t 093 \t|\t 093\n"
		<< "\t 93 \t|\t 93\n"
		<< "\t 12 \t|\t 12\n"
		<< "\t 111 \t|\t 111\n";
	system("pause");
	
	

	
	float R1=2.0, R2=4.0, R3=8.0;
	float R0;
	R0 = 1/R1 + 1/R2 + 1/R3;
	R0 = 1 / R0;
	cout << "������������� R0= " << R0 << endl;
	system("pause");

	double S, L, Pi,R;
	Pi = 3.14;
	cout << "������� ����� ����� \n";
	cin >> L;
	R = L / 2 * Pi;
	S = Pi * R*R;
	cout << "������� ����� " << S << endl;
	system("pause");

	double s, v, t, a;
	cout << "������� �������� \n";
	cin >> v;
	cout << "������� ����� \n";
	cin >> t;
	cout << "������� ��������� \n";
	cin >> a;
	s = v * t + (a*t*t) / 2;
	cout << "���������� ����� " << s << endl;
	system("pause");

	double rass, vrem,skor;
	cout << "������� ����� � ���\n";
	cin >> vrem;
	cout << "������� ����������  � ��\n";
	cin >> rass;
	skor = rass / vrem;
	cout << "�������� ����� " << skor <<" ��/���"<< endl;
	system("pause"); 

	int chas1, chas2, min1, min2, sek1, sek2, sum1,sum2 ;
	double gold, sum_za_1sek, summ;
	cout << "������� �����o ��������� � �����, �������, �������� \n";
	cin >> chas1 >> min1 >> sek1;
	cout << "������� ����� ����� ��������� � �����, �������, �������� \n";
	cin >> chas2 >> min2 >> sek2;
	sum2 = (chas2 * 60 * 60 + min2 * 60 + sek2);
	sum1=(chas1 * 60 * 60 + min1 * 60 + sek1);
	summ = sum2 - sum1;
	gold = summ * 0.5/100;//0.5-��������� 1 ������� ���������
	cout << "��������� ��������� " << gold << " ���" << endl;
	system("pause");


	float stoim1, stoim2, stoim3, rash1, rash2, rash3;
	float poezd1, poezd2, poezd3;
	cout << "������� ��������� 1-��, 2-��, 3-�� �������\n";
	cin >> stoim1 >> stoim2 >> stoim3;
	cout << "������� ������ �� 100 �� \n";
	cin >> rash1 >> rash2 >> rash3;
	poezd1 = stoim1 * rash1;
	poezd2 = stoim2 * rash2;
	poezd3 = stoim3 * rash3;
	cout << "\t \t \t     ������ 1\t     ������ 2\t     ������ 3 \n";
	cout << "\n";
	cout << " ���� �� 1 ���� " << "\t \t" <<stoim1 << "\t \t"<< stoim2 << "\t \t"<< stoim3<<'\n';
	cout<<"\n";
	cout << "������ �� 100 ��" << "\t \t"<< rash1 << "\t \t"<<rash2 << "\t \t" <<rash3<<'\n';
	cout << "\n";
	cout<<"��������� ������� " << "\t \t"<< poezd1<< "\t \t" << poezd2 << "\t \t" << poezd3 << '\n';

	system("pause");








}