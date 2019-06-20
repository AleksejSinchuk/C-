
#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include <Windows.h>

using namespace std;


struct Kompl_ch {
	double a;
	double b;
	const char i = 'i';
	void show() {
		cout << a << "+" << "(" << b << i << ")" << endl;

	}
};
Kompl_ch  *sum(Kompl_ch *q, double a1, double b1, double a2, double b2) {
	q->a = a1 + a2;
	q->b = b1 + b2;
	return q;
}
Kompl_ch  *razn(Kompl_ch *q, double a1, double b1, double a2, double b2) {
	q->a = a1 - a2;
	q->b = b1 - b2;
	return q;
}
Kompl_ch  *umn(Kompl_ch *q, double a1, double b1, double a2, double b2) {
	q->a = (a1 * a2) - (b1*b2);
	q->b = (a1 * b2) + (b1*a2);
	return q;
}
Kompl_ch  *del(Kompl_ch *q, double a1, double b1, double a2, double b2) {
	q->a = (a1 * a2) + (b1*b2) / a2 * a2 + b2 * b2;
	q->b = (a2 * b1) - (a1*b2) / a2 * a2 + b2 * b2;
	return q;
}

struct Car
{
	double dl;
	double klir;
	double V;
	double P;
	double d;
	char color;
	char transm;
	void Incar() {
		cout << "����� " << endl;
		cin >> dl;

		cout << "������ �������� " << endl;
		cin >> klir;
		cout << "����� ��������� " << endl;
		cin >> V;
		cout << "�������� " << endl;
		cin >> P;
		cout << "������� ����� " << endl;
		cin >> d;
		cout << "���� " << endl;
		cin >> color;
		cout << "��� �� " << endl;
		cin >> transm;

	}
	void show() {

		cout << "����� " << dl << endl;
		cout << "������ �������� " << klir << endl;
		cout << "����� ��������� " << V << endl;
		cout << "�������� " << P << endl;
		cout << "������� ����� " << d << endl;
		cout << "���� " << color << endl;
		cout << "��� �� " << transm << endl;
	}
	void serch() {
		int q;
		char w;
		cout << "��� ����� ?" << endl;
		cout << "����� - 1 " << endl;
		cout << "������ �������� - 2 " << endl;
		cout << "����� ��������� - 3" << endl;
		cout << "�������� - 4" << endl;
		cout << "������� ����� - 5" << endl;
		cout << "���� - 6" << endl;
		cout << "��� �� - 7" << endl;
		do {
			cin >> q;
			switch (q)
			{
			case 1:cout << "����� " << dl << endl; break;
			case 2:cout << "������ �������� " << klir << endl; break;
			case 3:cout << "����� ��������� " << V << endl; break;
			case 4:	cout << "�������� " << P << endl; break;
			case 5:cout << "������� ����� " << d << endl; break;
			case 6:cout << "���� " << color << endl; break;
			case 7:cout << "��� ��  " << transm << endl; break;
			}

			cout << "����� ��� ��� �� ��������? y/n" << endl;
			cin >> w;

		} while (w == 'y');


	}
};

struct book {
	char nazv[35];
	char avtor[35];
	char izdat[35];
	char janr[35];
	void show() {
		cout << nazv << "\n" << avtor << "\n" << izdat << "\n" << janr << endl;
	}
};

void copy(char a[], int n, char b[]) {
	n += 1;
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

void redact(book a[]) {
	cout << "����� ����� ��������?(����� �����)" << endl;
	int n; cin >> n;
	n -= 1;
	cout << "��� ��������?" << endl;
	cout << " 1-�������� \n 2-����� \n 3-��� ����������� \n 4-���� \n";
	int w;
	cin >> w;
	cout << "������� ���������" << endl;
	switch (w)
	{
	case 1: cin >> a[n].nazv; break;
	case 2: cin >> a[n].avtor; break;
	case 3: cin >> a[n].izdat; break;
	case 4: cin >> a[n].janr; break;
	}
	a[n].show();
}

void print(book a[]) {
	for (int i = 0; i < 5; i++) {
		a[i].show();
		cout << endl;
	}
}


void Savtor(book a[]) {
	char qwe[35];
	cout << "������� ������" << endl;
	gets_s(qwe);
	int k = 0;
	int t = strlen(qwe);
	for (int i = 0; i < 5; i++) {
		k = 0;
		for (int j = 0; j < t; j++) {
			if (*(qwe + j) == a[i].avtor[j])
				k += 1;
		}
		if (k == t)
			a[i].show();
	}
}
void Snazv(book a[]) {
	char qw[35];
	cout << "������� ��������" << endl;
	gets_s(qw);
	int k = 0;
	int t = strlen(qw);
	for (int i = 0; i < 5; i++) {
		k = 0;
		for (int j = 0; j < t; j++) {
			if (*(qw + j) == a[i].nazv[j])
				k += 1;
		}
		if (k == t)
			a[i].show();
	}
}
void sortNazv(book a []) {
	int c;
	for (int i = 0; i < 4; i++) {
		c = 0;
		do {
			if (a[i].nazv[c] > a[i + 1].nazv[c]) {
				swap(a[i], a[i + 1]);
				i = 0;
			}
			if (a[i].nazv[c] == a[i + 1].nazv[c])
				c++;
		} while (a[i].nazv[c] == a[i + 1].nazv[c]);
	}
}
void sortAvt(book a[]) {
	int c;
	for (int i = 0; i < 4; i++) {
		c = 0;
		do{
			if (a[i].avtor[c] > a[i + 1].avtor[c]) {
				swap(a[i], a[i + 1]);
				i = 0;
			}
			if (a[i].avtor[c] == a[i + 1].avtor[c])
				c++;
		} while (a[i].avtor[c] == a[i + 1].avtor[c]);
		
	}
}
void sortIzd(book a[]) {
	int c;
	
		for (int i = 0; i < 4; i++) {
			c = 0;
			do {
				if (a[i].izdat[c] < a[i + 1].izdat[c]) {
					swap(a[i], a[i + 1]);
					i = 0;
				}
				else if (a[i].izdat[c] == a[i + 1].izdat[c])
					c++;
			} while (a[i].izdat[c] == a[i + 1].izdat[c]);

		}
	
}

struct CAR
{
	char color[15];
	char model[15];
	char numb[9];
	void Incar(CAR *a) {
		cout << "������� ����" << endl;
		gets_s(a->color);
		cout << "������� ������" << endl;
		gets_s(a->model);
		cout << "������� ����� " << endl;
		gets_s(a->numb);

	}
	void printCAR() {
		cout << color << " " << model << " " << numb << endl;
	}


};
void PrintAll( CAR mass [],int a) {
	for (int i = 0; i < a; i++)
		mass[i].printCAR();

}
void ReductCar(CAR mass[], int a) {
	PrintAll(mass, a);
	cout << "����� ������ ������������� ? ������ �� 1 �� 10" << endl;
	int k;
	cin >> k;
	mass[k].Incar();

}
void FindNum(CAR mass[], int a) {
	char b[10];
	cin >> b;
	int k;
	for (int i = 0; i < a; i++) {
		k = strcmp(mass[i].numb, b);
		if (k == 0)
			mass[i].printCAR();
	}
}



					//�������
struct Valut
{
	char name[4];
	float rate;
	int b, k;
	void show() {
		cout << name << " " << b << "." << k << " " << rate;
	}
	void Changerate() {
		cin >> rate;
	}
	void Addsum(int a, int c) {
		b += a;
		k += c;
		if (k >= 100) {
			k -= 100;
			b++;
		}
	}
		void Subsum(int a, int c) {
			if (k < c&& a == b + 1|| k < c && a < b )
				cout << "���������� ����� ����� ����" << endl;
			else {
				if (k < c) {
					k += 100;
					k -= c;
					b--;
				}
				if (a < b)
					b -= a;
			}
		}
};

struct Valet
{
	Valut *v;
	int count = 0;
	void showall(Valut *v, int  count) {
		for (int i = 0; i < count; i++)
			*(v + i)->show;
	}

	void showval(Valut *v, int  count) {
		char a[4];
		int j;
		cout << "����� ������ ��������?" << endl;
		gets_s(a);
		for (int i = 0; i < count; i++) {
			j = strcmp(v[i].name, a);
			if(j==0)
				*(v + i)->show;
		}
	}

	void addval(Valut *v, int  *count) {
		Valut *k = new Valut[*count + 1];
		for (int i = 0; i < *count; i++)
			k[i] = v[i];
		cout << "������� �������� ������" << endl;
		cin >> k[*count + 1].name;
		cout << "������� ���� ������" << endl;
		cin >> k[*count + 1].rate;
		cout << "������� ������ � ������ ������" << endl;
		cin >> k[*count + 1].b>> k[*count + 1].k;
		*(count) += 1;
		delete v;
		v = k;

	}

	void dellval(Valut *v, int  *count) {
		Valut *k = new Valut[*count - 1];
		char a[4];
		int j;
		cout << "����� ������ �������?" << endl;
		gets_s(a);
		for (int i = 0; i < *count; i++) {
			j = strcmp(v[i].name, a);
			if (j == 0)
				swap(*(v + i), *(v + *count - 1));
		}
		for (int i = 0; i < *count; i++)
			k[i] = v[i];
		delete v;
		v = k;
		*(count) -= 1;
	}


	void Addsumval(Valut *v, int  count) {
		char a[4];
		int j;
		int q, w;
		cout << "����� ������ ���������?" << endl;
		gets_s(a);
		for (int i = 0; i < count; i++) {
			j = strcmp(v[i].name, a);
			if (j == 0) {
				cout << "������� ���������� ����� � ������" << endl;
				cin >> q >> w;
				v[i].b += q;
				v[i].k += w;
				if (v[i].k >= 100) {
					v[i].k -= 100;
					v[i].b++;
				}

			}
		}
	}

	void Subsumval(Valut *v, int  count) {
		char a[4];
		int j;
		int q, w;
		cout << "����� ������ �����?" << endl;
		gets_s(a);
		for (int i = 0; i < count; i++) {
			j = strcmp(v[i].name, a);
			if (j == 0) {
				cout << "������� ���������� ����� � ������" << endl;
				cin >> q >> w;
				if (v[i].k < w && q == v[i].b + 1 || v[i].k < w && q < v[i].b)
					cout << "���������� ����� ����� ����" << endl;
				else {
					if (v[i].k < w) {
						v[i].k += 100;
						v[i].k -= w;
						v[i].b--;
					}
					if (q < v[i].b)
						v[i].b -= q;
				}

			}
		}
	}
};
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//Kompl_ch q = { 2,5 };				//1-� �������
	//q.show();
	//Kompl_ch w = { 1,1 };
	//Kompl_ch *e=new Kompl_ch;
	//e = sum(e, q.a, q.b, w.a, w.b);
	//e = razn(e, q.a, q.b, w.a, w.b);
	//e = umn(e, q.a, q.b, w.a, w.b);
	//e = del(e, q.a, q.b, w.a, w.b);
	//e->show();
	//delete e;


	//Car qwe;					//2-� �������
	//qwe.Incar();
	//qwe.show();
	//qwe.serch();

	//book mass[5];				//3-� �������
	//int q;
	//char a1[] = { "451� �� ����������" };
	//q = strlen(a1);
	//copy(a1, q, mass[0].nazv);
	//char a2[] = { "��� ��������" };
	//q = strlen(a2);
	//copy(a2, q, mass[0].avtor);
	//char a3[] = { "1987" };
	//q = strlen(a3);
	//copy(a3, q, mass[0].izdat);
	//char a4[] = { "����������" };
	//q = strlen(a4);
	//copy(a4, q, mass[0].janr);


	//char b1[] = { "����� ������ � ����� ��������" };
	//q = strlen(b1);
	//copy(b1, q, mass[1].nazv);
	//char b2[] = { "��. �. �������" };
	//q = strlen(b2);
	//copy(b2, q, mass[1].avtor);
	//char b3[] = { "2017" };
	//q = strlen(b3);
	//copy(b3, q, mass[1].izdat);
	//char b4[] = { "�������" };
	//q = strlen(b4);
	//copy(b4, q, mass[1].janr);


	//char c1[] = { "������� ����" };
	//q = strlen(c1);
	//copy(c1, q, mass[2].nazv);
	//char c2[] = { "�.����" };
	//q = strlen(c2);
	//copy(c2, q, mass[2].avtor);
	//char c3[] = { "2017" };
	//q = strlen(c3);
	//copy(c3, q, mass[2].izdat);
	//char c4[] = { "�����" };
	//q = strlen(c4);
	//copy(c4, q, mass[2].janr);


	//char v1[] = { "��������" };
	//q = strlen(v1);
	//copy(v1, q, mass[3].nazv);
	//char v2[] = { "������ �������" };
	//q = strlen(v2);
	//copy(v2, q, mass[3].avtor);
	//char v3[] = { "2016" };
	//q = strlen(v3);
	//copy(v3, q, mass[3].izdat);
	//char v4[] = { "�����" };
	//q = strlen(v4);
	//copy(v4, q, mass[3].janr);


	//char q1[] = { "���� �����-������" };
	//q = strlen(q1);
	//copy(q1, q, mass[4].nazv);
	//char q2[] = { "�.����" };
	//q = strlen(q2);
	//copy(q2, q, mass[4].avtor);
	//char q3[] = { "2017" };
	//q = strlen(q3);
	//copy(q3, q, mass[4].izdat);
	//char q4[] = { "�����������" };
	//q = strlen(q4);
	//copy(q4, q, mass[4].janr);

	////redact(mass);
	////print(mass);
	////Savtor(mass);
	////Snazv(mass);
	///*sortNazv(mass);
	//for (int i = 0; i < 5; i++)
	//	mass[i].show();*/

	///*sortAvt(mass);
	//for (int i = 0; i < 5; i++)
	//	mass[i].show();*/


	//sortIzd(mass);
	//for (int i = 0; i < 5; i++)
	//	mass[i].show();


	/*CAR a1;						//4-� �������
	a1.Incar(&a1);
	a1.printCAR();*/ 
	/*CAR masscar[10];
	PrintAll(masscar, 10);
	ReductCar(masscar, 10);
	FindNum(masscar, 10);*/

	system("pause");

}

