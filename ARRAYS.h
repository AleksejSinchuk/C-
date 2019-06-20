//#pragma once
//#include<iostream>
//#include<cmath>
//#include<ctime>
////#include "ARRAYS.h"
//using namespace std;
//
//template<class T>
//void ShowArr(T arr[], int  n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template<class T>
//void  InArr(T arr[], T  n) {
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 5 ;
//	}
//}
//
//template<class T>
//	T *AddElem(T *a, int *size, T b) {
//	T *c = new T [*size + 1];
//	for (int i = 0; i < *size; i++)
//		*(c + i) = *(a + i);
//	*(c + *size ) = b;
//	(*size)++;
//	return c;
//  delete [] a;
//}
//
//
//
//
//// удаление из массива повтор элементов
//template <class T> 
//T *Sort(T *ar, int *size)
//{
//	for (int i = 0; i < *size; i++)
//	{
//		for (int j = i + 1; j < *size; j++)
//		{
//			if (*(ar + i) == *(ar + j))
//			{
//				for (int k = j; k < *size - 1; k++)
//				{
//					*(ar + k) = *(ar + k + 1);
//				}
//				ar = DelElem(ar, size);
//				if (*(ar + i) == *(ar + j))
//				{
//					j--;
//				}
//			}
//		}
//	}
//	return ar;
//}
//
//
//template<class T> // ”дал€ет последний элемент массива
//T *DelElem(T *a, int *size) {
//	T *c = new T[*size-1];
//	for (int i = 0; i < *size-1; i++)
//		*(c + i) = *(a + i);
//	(*size)--;
//	return c;
//	delete[] a;
//}
//
//template<class T>
//T *2_mas_in_1(T *A, int sizeA, T *B, int sizeB, T *c, int *sizeC) {
//	for (int i = 0; i < sizeA; i++) {
//		c = AddElem(c, sizeC, *(A + i));
//	}
//	for (int i = 0; i < sizeB; i++) {
//		c = AddElem(c, sizeC, *(B + i));
//	}
//	return c;
//}
//
//
//template<class T>
//T *InArrHand(T *A, int *sizeA) {
//	T b;
//	cout << "¬ведите массив и вконце букву " << endl;
//	while (cin >> b){
//		
//		A = AddElem(A, sizeA, b);
//	}
//	
//	
//	return A;
//}