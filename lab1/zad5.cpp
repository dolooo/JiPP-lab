#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

void dodawanie_macierzy(char **tab)
{
	double m1[2][3];
	double m2[2][3];
	double m3[2][3];
	int licznik = 1;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m1[i][j] = atof(tab[licznik++]);
		}
	}

	cout << "----Macierz 1----"; cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "  ";
		for (int j = 0; j < 3; j++)
		{
			cout << m1[i][j]; cout << "  ";
		}
		cout << endl;
	}
	//---------------------------------------------

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m2[i][j] = atof(tab[licznik++]);
		}
	}

	cout << "----Macierz 2----"; cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "  ";
		for (int j = 0; j < 3; j++)
		{
			cout << m2[i][j]; cout << "  ";
		}
		cout << endl;
	}

	//---------------------------------------------

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m3[i][j] = m2[i][j] + m1[i][j];
		}
	}

	cout << "------Suma-------"; cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "  ";
		for (int j = 0; j < 3; j++)
		{
			cout << m3[i][j]; cout << "  ";
		}
		cout << endl;
	}
}



int main(int argc, char *argv[])
{
	dodawanie_macierzy(argv);
	return 0;
}