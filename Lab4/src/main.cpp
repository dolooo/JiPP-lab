#include "matrix.h"

using namespace std;

void test()
{
	cout << "Konstruktor przyjmujacy dwa argumenty:\n";
	Matrix m0(5, 6);
	m0.print();
	cout << "Konstruktor przyjmujacy jeden argument:\n";
	Matrix m1(6);
	m1.print();

	cout << "Macierz wypelniona metoda set:\n";
	double x = 2;
	for (int i = 0; i < m0.rows(); i++)
	{
		for (int j = 0; j < m0.cols(); j++)
		{
			m0.set(i, j, x);
		}
	}
	m0.set(3, 3, 6);
	m0.print();

	cout << "Metoda get pobierajaca element (3,3):\n";
	int get_test = m0.get(3, 3);
	cout << get_test << endl;


	Matrix m2(5, 6);
	double y = 3;
	for (int i = 0; i < m2.rows(); i++)
	{
		for (int j = 0; j < m2.cols(); j++)
		{
			m2.set(i, j, x);
		}
	}
	cout << "Macierz 1:\n";
	m0.print();
	cout << "Macierz 2:\n";
	m2.print();
	cout << "Macierz 1 + 2:\n";
	Matrix m3 = m0.add(m2);
	m3.print();
	cout << "Macierz 2 - 1: \n";
	Matrix m4 = m2.subtract(m0);
	m4.print();

	Matrix m5(6, 5);
	double z = 1;
	for (int i = 0; i < m5.rows(); i++)
	{
		for (int j = 0; j < m5.cols(); j++)
		{
			m5.set(i, j, x);
			z += 0, 1;
		}
	}
	cout << "macierz 3:\n";
	m5.print();
	cout << "Macierz 1 * 3: \n";
	Matrix m6 = m0.multiply(m5);
	m6.print();

	cout << "Wiersze macierzy 1*3: \n";
	int test_w = m6.rows();
	cout << test_w << endl;
	cout << "Kolumny macierzy 1*3: \n";
	int test_k = m6.cols();
	cout << test_k << endl;

	cout << "Zapis do pliku macierzy 1*3\n";
	m6.store("dane.txt", "C:/Users/sdole/OneDrive/Desktop/3 sem/jipp/");
	Matrix m7("dane.txt", "C:/Users/sdole/OneDrive/Desktop/3 sem/jipp/");
	cout << "Macierz odczytana z pliku:\n";
	m7.print(); 
}

int main()
{
	test();
}