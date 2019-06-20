#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<cstdlib>

using namespace std;


template<class T>
void InMass2D(T **&P, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			P[i][j] = rand() % 10;
		}
	}
}

template<class T>
void ShowMass2D(T **&P, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << P[i][j] << " ";
		}
		cout << endl;
	}
}

template<class T>
void ShowMass2D5(T **&P, int row, int col1,int col2) {
	
		for (int j = 0; j < col1; j++) {
			cout << P[0][j];
		}
		cout << endl;
		for (int j = 0; j < col2; j++) {
			cout << P[1][j];
		}
		cout << endl;
}


template<class T>
void DellMass2D(T **&P, int row, int col) {
	for (int i = 0; i < row; i++)
		delete[] P[i];
	delete[] P;
}

template<class T>
T *DelElem(T *a, int *size) {
	T *c = new T[*size - 1];
	for (int i = 0; i < *size - 1; i++)
		*(c + i) = *(a + i);
	(*size)--;
	delete[] a;
	return c;
}

template<class T>
T *DelElemInMass(T *a, int *size, int *k) {
	for (int i = *k; i < *size-1; i++) {
		*(a + i) = *(a + i + 1);
	}
	T *c = new T[*size - 1];
	for (int i = 0; i < *size - 1; i++)
		*(c + i) = *(a + i);
	(*size)--;
	delete[] a;
	return c;
}


template<class T>
void DellColum(T **&P, int row, int *col) {
	cout << "Какую колонку удалить?" << endl;
	int k, g;
	cin >> k;
	k -= 1;
	for (int i = 0; i < row; i++) {
		g = *col;
		P[i] = DelElemInMass(P[i], &g, &k);
	}
	*(col) -= 1;
}

template<class T>
T *AddElem(T *a, int *size) {
	T *c = new T[*size + 1];
	for (int i = 0; i < *size; i++)
		*(c + i) = *(a + i);
	(*size)+=1;
	return c;
	delete[] a;
}

template<class T>
void AddElemInMass(T *a, int size, int *k) {

	for (int i = size-1; i > *k; i--) {
		*(a + i) = *(a + i - 1);
	}
	*(a + *k) = 0;
}

template<class T>
void AddColum(T **&P, int row, int *col) {
	cout << "Какую колонку добавить ?" << endl;
	int k, g;
	cin >> k;
	k -= 1;
	for (int i = 0; i < row; i++) {
		g = *col;
		P[i] = AddElem(P[i], &g);
		AddElemInMass(P[i], g, &k);
	}
	*(col)+=1;

}
template<class T>
void Right(T *a, int *size,int q) {
	T v;
	while (q != 0)
	{
		v = *(a + *size-1);
		for (int i = *size-1; i > 0; i--) {
			*(a + i) = *(a + i - 1);
		}
		*(a + 0) = v;
		q--;
	}

}

template<class T>
void Left(T *a, int *size, int q) {
	T v;
	while (q != 0)
	{
		v = *(a + 0);
		for (int i = 0; i < *size - 1; i++) {
			*(a + i) = *(a + i + 1);
		}
		*(a + *size - 1) = v;
		q--;
	}

}
template<class T>
void Up(T *a, int size, int q) {
	while (q != 0)
	{
		for (int i = 0; i < size - 1; i++)
			swap(*(a + i), *(a + i + 1));
		q--;
	}

}
template<class T>
void Down(T *a, int size, int q) {
	while (q != 0)
	{
		for (int i = size - 1; i >0 ;  i--)
			swap(*(a + i), *(a + i - 1));
		q--;
	}

}

template<class T>
void GoMass(T **&P, int row, int col) {
	char a ;
	do
	{
		cout << "1-сдвинуть вверх \n2-сдвинуть вниз \n3-сдвинуть вправо \n4-сдвинуть влево \n ";
		int k;
		cin >> k;
		cout << "Сколько раз cдвинуть ?" << endl;
		int b;
		cin >> b;
		switch (k)
		{
		case 1: Up(P, row, b); break;
		case 2: Down(P, row, b); break;
		case 3: for (int i = 0; i < row; i++) {
			Right(P[i], &col, b);
		} break;

		case 4:for (int i = 0; i < row; i++) {

			Left(P[i], &col, b);
		} break;

		}
		cout << "Нужно что то с массивом делать ?  y/n" << endl;
		cin >> a;
	} 
	while (a != 'n');
}

template<class T>
T **Transp(T **&P, int row, int col) {
	int **mass2 = new int *[col];
	for (int i = 0; i < col; i++)
		mass2[i] = new int[row];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			mass2[j][i] = P[i][j];
	}

	DellMass2D(P, row, col);


	return mass2;
}

template<class T>
	T *AddElem5(T *a, int *size, T b) {
	T *c = new T [*size + 1];
	for (int i = 0; i < *size; i++)
		*(c + i) = *(a + i);
	*(c + *size ) = b;
	(*size)++;
	return c;
  delete [] a;
}

template<class T>
T *InPhone(T *A, int *sizeA) {
	T b;
	cout << "Введите номер и a " << endl;
	do {
		cin >> b;
		A = AddElem5(A, sizeA, b);
	}
	while (b != 'a');
	A = DelElem(A, sizeA);
	return A;
}

template<class T>
T *InName(T *A, int *sizeA) {
	T b;
	cout << "Введите имя и 1 " << endl;
	do {
		cin >> b;
			A = AddElem5(A, sizeA, b);
	}
	while (b != '1');
	A = DelElem(A, sizeA);
	return A;
}

template<class T>
void Search5(T **&P, int col1, int col2) {
	int k = 0;
	int q = 0;
	T *c = new T[k];
	cout << "Поиск по имени" << endl;
	c = InName(c, &k);
	for (int j = 0; j < col1; j++) {
		if (P[0][j] == c[j])
			q++;
	}
	if (q == col1) {
		for (int j = 0; j < col2; j++) {
			cout << P[1][j];
		}
	}
	
	
	else {
		q = 0;
		int u = 0;
		T *z = new T[u];
		cout << "Поиск по номеру" << endl;
		z = InPhone(z, &u);
		for (int j = 0; j < col2; j++) {
			if (P[1][j] == z[j])
				q++;
		}
		if (q == col2)
		{
			for (int j = 0; j < col1; j++)
				cout << P[0][j];
		}
		else
			cout << "Совпадений нет" << endl;
		delete[] z;
	}
	
	cout << endl;
	delete[] c;
	
}

template<class T>
void ShowArr(T arr[], int  n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << endl;
}
template<class T>
void AddElemInMass2(T *a, int size, int *k, T *simb ) {

	for (int i = size - 1; i > *k; i--) {
		*(a + i) = *(a + i - 1);
	}
	*(a + *k) = *simb;
}

template<class T>
T *AddincharMass(T *a, int *size, int k) {
	a = AddElem(a, size);
	cout << "Какой символ добавить?" << endl;
	char q;
	cin >> q;
	AddElemInMass2(a, *size, &k, &q);
	if (k == *size - 1)
		swap(*(a + *size - 1), *(a + *size - 2));
	return a;
}

template<class T>
T *Zam(T *a, int *size) {
	char q = '!';
	for (int i = 0; i < *size; i++) {
		if (a[i] == '.')
			a[i] = q;
	}
	return a;
}


 void Kol (char *a, int *size,int *q,int *w,int *e) {
	 for (int i = 0; i < *size-1; i++) {
		 if (isdigit(a[i]))
			 (*q)++;
		 else if (isalpha(a[i]))
			 (*w)++;
		 else (*e)++;
	 }
}

 int Kolsimb(char *a, int *size, char k) {
	 int q=0;
	 for (int i = 0; i < *size; i++)
		 if (a[i] == k)
			 q++;
	 return q;
}

 void Tab(char *a, int *size) {
	 int  q = 9;
	 for (int i = 0; i < *size; i++) {
		 if (a[i] == ' ')
			 a[i] = q;
	 }
 }

 void Slov(char *a, int *size,int *q) {
	 for (int i = 0; i < *size; i++) {
		 if (a[i] == ' ' && a[i+1]!=' ')
			 (*q)++;
	 }
	 (*q) += 1;
 }

 void Palind(char *a, int *size) {
	 int w = (*size - 1) / 2;
	 int p = 0;
	 for (int i = 0; i < w; i++)
		 if (a[i] == a[*size - 2 - i])
			 p++;
	 if (p == w)
		 cout << "Строка полиндром " << endl;
	 else
		 cout << "Строка не полиндром" << endl;

 }

 template<class T>
 T *whod (T *a, int *size,T k) {
	 
	 for (int i = 0; i < *size; i++) {
		 if (a[i] == k)
			 a = DelElemInMass(a, size, &i);
		 if (a[i] == k)
			 i--;
	 }
	 

	 return a;
 }


int main() {
	setlocale(LC_ALL, "Russian");

											//Динамические 2д массивы 
	/*int str, kol;
	cout << "Количество строк " << endl;
	cin >> str;
	cout << "Количество столбцов " << endl;
	cin >> kol;
	int **mass = new int *[str];
	for (int i = 0; i < str; i++)
		mass[i] = new int[kol];

	
	InMass2D(mass, str, kol);
	ShowMass2D(mass, str, kol);*/
	
	//AddColum(mass, str, &kol);			//Задание 1
	////DellColum(mass, str, &kol);			//Задание 2
	////GoMass(mass, str, kol);				//Задание 3 
	//cout << endl;
	//ShowMass2D(mass, str, kol);
	//DellMass2D(mass, str, kol);
								
	/*int **mass2;							//Задание 4
	mass2 = Transp(mass, str, kol);
	cout << endl;
	ShowMass2D(mass2, str, kol);
	DellMass2D(mass2, str, kol);
	*/
	
											//Задание 5
	/*int k = 0;
	char *name = new char[k];
	int p = 0;
	char *phone = new char[p];
	name = InName(name, &k);
	phone = InPhone(phone, &p);
	int str = 2;
	char **Phone5 = new char *[str];
	Phone5[0] = name;
	Phone5[1] = phone;
	ShowMass2D5(Phone5, str, k, p);

	Search5(Phone5, k, p);

	char elm ;
	cout << "Изменить имя ? y/n"<<endl;
	cin >> elm;
	int r = 0;
	char *name2 = new char[r];
	if ( elm == 'y') {
		name2 = InName(name2, &r);
		Phone5[0] = name2;
		k = r;
	}
	cout << "Изменить номер ? y/n" << endl;
	cin >> elm;
	 r = 0;
	char *phone2 = new char[r];
	if (elm == 'y') {
		phone2 = InPhone(phone2, &r);
		Phone5[1] = phone2;
		p = r;
	}

	ShowMass2D5(Phone5, str, k, p);
	
	delete[] name;
	delete[] name2;
	delete[] phone;
	delete[] phone2;
	delete[] Phone5;
*/

	 //Строки


	char str[80];
	gets_s(str);
	int a = strlen(str);
	a += 1;
	char *c = new char[a];
	for (int i = 0; i < a; i++)
		*(c + i) = *(str + i);



	//cout << "Какую позицию массива удалить?" << endl;		//Задание 1
	//int k;
	//cin >> k;
	//k--;
	//c=DelElemInMass(c, &a, &k);
	//ShowArr(c, a);


	/*cout << "Введите символ " << endl;					//Задание 2
	char t;
	cin >> t;
	c = whod(c, &a, t);
	ShowArr(c, a);*/

	//cout << "В какую позицию добавить элемент?" << endl;		//Задание 3
	//int r;
	//cin >> r;
	//r--;
	//c=AddincharMass(c, &a,r );
	//cout << endl;
	//ShowArr(c, a);



	/*c = Zam(c, &a);										//Задание 4
	ShowArr(c, a);*/

	//cout<<"Введите символ"<<endl;							//Задание 5
	//char w;
	//cin >> w;
	//int q;
	//q = Kolsimb(c, &a, w);
	//cout << "В строке "<<q<<" "<< w << endl;


	/*int q, w, e;											//Задание 6 и 8
	q = 0; w = 0; e = 0;
	Kol(c, &a, &q, &w, &e);
	cout << "Цифр " << q << endl;
	cout << "Букв " << w << endl;
	cout << "Знаков " << e << endl;*/

	/*Tab(c, &a);											//Задание 7
	ShowArr(c, a);*/

	/*int q=0;												//Задание 9
	Slov(c, &a, &q);
	cout << "Количество слов " << q << endl;*/


	/*Palind(c, &a);*/										//Задание 10

	delete[] c;
	
	system("pause");
}