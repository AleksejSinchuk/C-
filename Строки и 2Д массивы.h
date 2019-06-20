#pragma once

//int kolsimv(char *t) {
//	int l = 0;
//	while (t[l]!='\0')
//	{
//		l++;
//	}
//	return l;
//}

// Гeнерация пароля
//char *pass(char *a, int b) {
//	char *v = new  char[b];
//	cout << "Введите шаблон ";
//	cin >> v;
//	return v;
//}
//
//char *pass2(char *a) {
//	int S = strlen(a);
//	char *v = new char[S + 1];
//	for (int i = 0; i < S; i++) {
//		if (islower(a[i])) {
//			v[i] = rand() % 26 + 97;
//		}
//		if (isupper(a[i])) {
//			v[i] = rand() % 26 + 65;
//		}
//		if (isdigit(a[i])) {
//			v[i] = rand() % 9 + 48;
//		}
//	}
//	v[S] = '\0';
//  delete a;
//	return v;
//}


//Создание 2-рного динам массива
//template<class T>
//void Mass2D(T **&P, int row, int col) {
//	P = new T *[row];
//	for (int i = 0; i < row; i++)
//		P[i] = new T[col];
//}

// Удаление 2-рного динам массива
//template<class T>
//void DellMass2D(t **&P, int row, int col) {
//	for (int i = 0; i < row; i++)
//	delete[] P[i];
//	delete[] P;
//}


//template<class T>
//void InMass2D(T **&P, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++){
//		P[i][j] = rand() % 10;
//		}
//	}
//}

//template<class T>
//void ShowMass2D(T **&P, int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++){
//		cout << P[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
