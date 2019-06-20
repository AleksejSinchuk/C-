#include<iostream>
#include<cmath>
#include <windows.h>
#include<ctime>
#include<conio.h>
using namespace std;


struct player
{
	int plx;
	int ply;
};



bool gameover;

void Setup() {
	gameover = false;
}

void prow(char **& a, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '*' && a[i + 1][j] == ' ') {
				a[i][j] = ' ';
				a[i + 1][j] = '*';
			}
			if (a[i][j] == '*'&&  a[i + 1][j] == '0')
				gameover = true;
		}
	}
}
void Input(char **&mass, int *x, int *y) {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':if (mass[*x][*y - 1] == ' ') {
			mass[*x][*y] = ' ';
			*y -= 1;
		}
				 else if (mass[*x][*y - 1] == '*' && mass[*x][*y - 2] == ' ') {
					 mass[*x][*y] = ' ';
					 mass[*x][*y - 2] = '*';
					 *y -= 1;
				 } break;

		case 'd':	if (mass[*x][*y + 1] == ' ') {
			mass[*x][*y] = ' ';
			*y += 1;
		}
			else if (mass[*x][*y + 1] == '*' && mass[*x][*y + 2] == ' ') {
						mass[*x][*y] = ' ';
						mass[*x][*y + 2] = '*';
						*y += 1;
			} break;

		case 'w':if (mass[*x - 1][*y] == ' ') {
			mass[*x][*y] = ' ';
			*x -= 1;
		}break;
		case 's':if (mass[*x + 1][*y] == ' ') {
			mass[*x][*y] = ' ';
			*x += 1;
		}
				 else if (mass[*x+1][*y ] == '*' && mass[*x+2][*y] == ' ') {
					 mass[*x][*y] = ' ';
					 mass[*x+2][*y] = '*';
					 *x += 1;
		}break;
		}
	}
}

template<class T>
void Down(T *a, int size) {
	int q = 1;
	while (q != 0)
	{
		for (int i = size - 2; i >1; i--)
			swap(*(a + i), *(a + i - 1));
		q--;
	}
	for (int i = 1; i < size - 1; i++)
		if (a[size - 2][i] == '0')
			a[size - 2][i] = ' ';
	for (int i = 1; i < size -1; i++) {
		for (int j = 1; j < size - 1; j++) {
			if (a[i][j] == '*') {
				a[i][j] = ' ';
				break;
			}
		}
	}

}

void  Logic(char **& dask, int m, int n,int *w,int *speed) {
	int q=0;
	for (int i = 1; i < n - 1; i++) {
		if (dask[m - 2][i] == '*')
			q++;
	}
	if (q == n - 2) {
		for (int i = 1; i < n - 1; i++) {
			dask[m - 2][i] = ' ';
			*w += 100;
		}
		*speed -= 10;
		Down(dask, m);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (dask[i][j] == '*'&&  dask[i + 1][j] == '0')
				gameover = true;
		}
	}
	
}


char ** Draw(char **& dask,int m,int n,int *x,int *y,int bx,int by,int *sch,int *speed){
	char t = '*';
	dask[*x][*y] = '0';
	dask[bx][by] = t;
	int q = 1;
	bool c;
	while (dask[bx+q][by] == ' ')
	{
		c = true;
		dask[bx+q][by] = t;
		dask[bx+q-1][by] = ' ';
		q++;
		for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			Input(dask, x, y);
			dask[*x][*y] = '0';
			Logic(dask, m, n, sch, speed);
		 cout << dask[i][j];
		
		}
		cout << endl;
		}
		cout << *sch;
		Sleep(*speed);
		system("cls");
		
	}
	
	return dask;
}

template<class T>
void DellMass2D(T **&P, int row, int col) {
	for (int i = 0; i < row; i++)
	delete[] P[i];
	delete[] P;
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	Setup();
	int sch = 0;
	int speed = 100;
	player d = {18,9 };
	player b;
	int m = 20;
	int n = 20;
	char**mass = new char *[m];
	for (int i = 0; i < m; i++)
		mass[i] = new char[n];
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < n; j++) {
			mass[i][j] = ' ';
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mass[0][j] = '#';
			mass[m - 1][j] = '#';
			mass[i][0] = '#';
			mass[i][n - 1] = '#';
		}
		cout << endl;
	}

	while (!gameover)
	{
		b = { 1 ,rand() % 18 + 1 };
		mass=Draw(mass,m,n,&d.plx,&d.ply,b.plx,b.ply,&sch,&speed);
		Logic(mass, m, n, &sch,&speed);
		
	}
	cout << "¬аш счет " << sch << endl;
	system("pause");
	DellMass2D(mass, m, n);
return (0);
}