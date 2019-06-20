#include<iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	cout << "Групп - Ария Песня - Осколок льда \n";
	cout << "Ночь унесла тяжёлые тучи, \n"
		<< "Но дни горьким сумраком полны. \n"
		<< "Мы расстаёмся, так будет лучше,\n"
		<< "Вдвоём нам не выбраться из тьмы. \n";
	system("pause");


	cout << "Каждый охотник желает знать, где сидит фазан\n";
	cout << "\tКаждый\n"
		<< "\t\tохотник\n"
		<< "\t\t\tжелает\n"
		<< "\t\t\t\tзнать\n"
		<< "\t\t\t\t\tгде\n"
		<< "\t\t\t\t\t\tсидит\n"
		<< "\t\t\t\t\t\t \tфазан\n";
	system("pause");

	cout << "Продам автомобиль \n"
		<< "Марка и модификация: ВАЗ 2109 \n"
		<< "Объем: 1300 см3 \n"
		<< "Мощность: 64 л.с.\n"
		<< "Год выпуска: 1993 \n"
		<< "Цена договорная \n"
		<< "Тел: 093 93 12 111 \n";
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
	cout << "Сопротивление R0= " << R0 << endl;
	system("pause");

	double S, L, Pi,R;
	Pi = 3.14;
	cout << "Введите длину круга \n";
	cin >> L;
	R = L / 2 * Pi;
	S = Pi * R*R;
	cout << "Площадь равна " << S << endl;
	system("pause");

	double s, v, t, a;
	cout << "Введите скорость \n";
	cin >> v;
	cout << "Введите время \n";
	cin >> t;
	cout << "Введите ускорение \n";
	cin >> a;
	s = v * t + (a*t*t) / 2;
	cout << "Расстояние равно " << s << endl;
	system("pause");

	double rass, vrem,skor;
	cout << "Введите время в час\n";
	cin >> vrem;
	cout << "Введите расстояние  в км\n";
	cin >> rass;
	skor = rass / vrem;
	cout << "Скорость равна " << skor <<" км/час"<< endl;
	system("pause"); 

	int chas1, chas2, min1, min2, sek1, sek2, sum1,sum2 ;
	double gold, sum_za_1sek, summ;
	cout << "Введите началo разговора в часах, минутах, секундах \n";
	cin >> chas1 >> min1 >> sek1;
	cout << "Введите время конца разговора в часах, минутах, секундах \n";
	cin >> chas2 >> min2 >> sek2;
	sum2 = (chas2 * 60 * 60 + min2 * 60 + sek2);
	sum1=(chas1 * 60 * 60 + min1 * 60 + sek1);
	summ = sum2 - sum1;
	gold = summ * 0.5/100;//0.5-стоимость 1 секунды разговора
	cout << "Стоимость разговора " << gold << " Грн" << endl;
	system("pause");


	float stoim1, stoim2, stoim3, rash1, rash2, rash3;
	float poezd1, poezd2, poezd3;
	cout << "Введите стоимость 1-го, 2-го, 3-го бензина\n";
	cin >> stoim1 >> stoim2 >> stoim3;
	cout << "Введите расход на 100 км \n";
	cin >> rash1 >> rash2 >> rash3;
	poezd1 = stoim1 * rash1;
	poezd2 = stoim2 * rash2;
	poezd3 = stoim3 * rash3;
	cout << "\t \t \t     Бензин 1\t     Бензин 2\t     Бензин 3 \n";
	cout << "\n";
	cout << " Цена за 1 литр " << "\t \t" <<stoim1 << "\t \t"<< stoim2 << "\t \t"<< stoim3<<'\n';
	cout<<"\n";
	cout << "Расход на 100 км" << "\t \t"<< rash1 << "\t \t"<<rash2 << "\t \t" <<rash3<<'\n';
	cout << "\n";
	cout<<"Стоимость поездки " << "\t \t"<< poezd1<< "\t \t" << poezd2 << "\t \t" << poezd3 << '\n';

	system("pause");








}