#include <iostream>
#include <string>
#include <fstream>
#include "matrix.h"

using namespace std;

//1a
Matrix::Matrix(int n, int m)
{
	if (n > 1 || m > 1)
	{
		wiersze = n;
		kolumny = m;
		macierz = new double *[wiersze];
		for (int i = 0; i < wiersze; i++)
		{
			macierz[i] = new double[kolumny];
		}
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				macierz[i][j] = 0;
			}
		}
	}
	else
	{
		cout << "Blad";
		exit(0);
	}
}

//1b
Matrix::Matrix(int nm)
{
	if (nm > 1)
	{
		wiersze = nm;
		kolumny = nm;
		macierz = new double *[wiersze];
		for (int i = 0; i < wiersze; i++)
		{
			macierz[i] = new double[kolumny];
		}
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				macierz[i][j] = 0;
			}
		}
	}
	else
	{
		cout << "Blad";
		exit(0);
	}
}

//2
void Matrix::set(int n, int m, double val)
{
	if (n < 0 || m < 0 || n > (wiersze - 1) || m > (kolumny - 1))
	{
		cout << "Blad";
		exit(0);
	}
	else macierz[n][m] = val;
}

//3
double Matrix::get(int n, int m)
{
	if (n < 0 || m < 0 || n > (wiersze - 1) || m > (kolumny - 1))
	{
		cout << "Blad";
		exit(0);
	}
	else return macierz[n][m];
}

//4
Matrix Matrix::add(Matrix m2)
{
	if (m2.wiersze != wiersze || m2.kolumny != kolumny)
	{
		cout << "Blad - liczba wierszy i kolumn musi byc taka sama w obu macierzach";
		exit(1);
	}
	else
	{
		Matrix nowaMacierz(wiersze, kolumny);
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				nowaMacierz.macierz[i][j] = macierz[i][j] + m2.macierz[i][j];
			}
		}
		return nowaMacierz;
	}
}

//5
Matrix Matrix::subtract(Matrix m2)
{
	if (m2.wiersze != wiersze || m2.kolumny != kolumny)
    {
	cout << "Blad - liczba wierszy i kolumn musi byc taka sama w obu macierzach";
	exit(1);
	}
	else
	{
		Matrix nowaMacierz(wiersze, kolumny);
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				nowaMacierz.macierz[i][j] = macierz[i][j] - m2.macierz[i][j];
			}
		}
		return nowaMacierz;
	}
}

//6
Matrix Matrix::multiply(Matrix m2)
{
	if (m2.wiersze != kolumny)
	{
		cout << "Blad - liczba kolumn pierwszej macierzy musi byc rowna liczbie wierszy drugiej macierzy";
		exit(1);
	}
	else
	{
		Matrix nowaMacierz(wiersze, kolumny);
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < m2.kolumny; j++)
			{
				double s = 0;
				for (int k = 0; k < m2.wiersze; k++)
				{
					s += (macierz[i][k] * m2.macierz[k][j]);
				}
				nowaMacierz.macierz[i][j] = s;
			} 
		}
	return nowaMacierz;
	}
}

//7
int Matrix::cols()
{
	return kolumny;
}

//8
int Matrix::rows()
{
	return wiersze;
}

//9
void Matrix::print()
{
	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			cout << macierz[i][j] << " ";
		}
		cout << endl;
	}
}

//10
void Matrix::store(string filename, string path)
{

	ofstream file;
	string fullpath = path + '/' + filename;
	file.open(fullpath, ios_base::out);
	if (file.good() == false)
	{
		cout << "Nie udalo sie otworzyc pliku";
	}
	else
	{
		file << wiersze << " " << kolumny << endl;
		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				file << macierz[i][j] << " ";
			}
			file << endl;
		}
		file.close();
		cout << "Udalo sie zapisac plik " << fullpath << endl;
	}
}

//11
Matrix::Matrix(string filename, string path)
{
	ifstream file;
	string fullpath = path + '/' + filename;
	file.open(fullpath, ios_base::in);
	if (file.good() == false)
	{
		cout << "Nie udalo sie otworzyc pliku";
	}
	else
	{
		file >> wiersze;
		file >> kolumny;

		macierz = new double *[wiersze];
		for (int i = 0; i < wiersze; i++)
		{
			macierz[i] = new double[kolumny];
		}

		for (int i = 0; i < wiersze; i++)
		{
			for (int j = 0; j < kolumny; j++)
			{
				file >> macierz[i][j];
			}
		}
		file.close();
		cout << "Udalo sie odczytac dane z pliku " << fullpath << endl;
	}
}