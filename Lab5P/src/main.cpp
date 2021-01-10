#include "matrix.h"

using namespace std;

void test_przeciazen()
{
	Matrix m0(5, 6);
	double x = 3;
	for (int i = 0; i < m0.rows(); i++)
	{
		for (int j = 0; j < m0.cols(); j++)
		{
			m0.set(i, j, x);
		}
	}

	Matrix m1(5, 6);
	double y = 1;
	for (int i = 0; i < m1.rows(); i++)
	{
		for (int j = 0; j < m1.cols(); j++)
		{
			m1.set(i, j, y);
		}
	}

	cout << "Macierz 1:\n";
	m0.print();
	cout << "Macierz 2:\n";
	m1.print();

	try //test dodawania
	{
		Matrix m2 = m0 + m1;
		cout << "Po dodaniu:\n";
		m2.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

	try //test odejmowania
	{
		
		Matrix m4 = m0 - m1;
		cout << "Po odjeciu:\n";
		m4.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

try //test mnozenia
{
	Matrix m3(5, 5);
	double z = 1;
	for (int i = 0; i < m3.rows(); i++)
	{
		for (int j = 0; j < m3.cols(); j++)
		{
			m3.set(i, j, z);
		}
	}
	cout << "Macierz 3:\n";
	m3.print();

	Matrix m5 = m3 * m0;
	cout << "Po przemnozeniu:\n";
	m5.print();
}
catch (int ex)
{
	cerr << "ERROR: " << ex << endl;
}







}






void test_bledow()
{
	cout << "----------LISTA BLEDOW----------" << endl;
	cout << "-1 : podano niepoprawna liczbe wierszy (mniejsza lub rowna 0)" << endl;
	cout << "-2 : podano niepoprawna liczbe kolumn (mniejsza lub rowna 0)" << endl;
	cout << "-3 : podano niepoprawna liczbe wierszy i kolumn (mniejsza lub rowna 0)" << endl;
	cout << "-4 : podany wiersz nie istnieje w danej macierzy" << endl;
	cout << "-5 : podana kolumna nie istnieje w danej macierzy" << endl;
	cout << "-6 : liczba wierszy obydwu macierzy jest rozna" << endl;
	cout << "-7 : liczba kolumn obydwu macierzy jest rozna" << endl;
	cout << "-8 : liczba wierszy pierwszej macierzy nie odpowiada liczbie kolumn drugiej macierzy" << endl;
	cout << "-9 : podano niepoprawna sciezke" << endl;
	cout << "--------------------------------" << endl;
	try {
		cout << "Konstruktor przyjmujacy dwa argumenty: -5, 6\n";
		Matrix m0(-5, 6);
		m0.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

	try {
		cout << "Konstruktor przyjmujacy dwa argumenty: 5, -6\n";
		Matrix m0(5, -6);
		m0.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

	try {
	cout << "Konstruktor przyjmujacy jeden argument: -2\n";
	Matrix m1(-2);
	m1.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

	try
	{
		cout << "Element (-2,4) macierzy (5,6) ustawiony metoda set\n";
		Matrix m0(5, 6);
		m0.set(-2, 4, 99);
		m0.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}

	try
	{
		cout << "Metoda get pobierajaca element (3,-3):\n";
		Matrix m0(5, 5);
		int get_test = m0.get(3, -3);
		cout << get_test << endl;
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}
	try
	{
		Matrix m0(5, 6);
		Matrix m1(4, 5);
		cout << "Macierz (5,6) + Macierz (4,5):\n";
		Matrix m2 = m0.add(m1);
		m2.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}
	try
	{
		Matrix m0(5, 6);
		Matrix m1(5, 5);
		cout << "Macierz (5,6) - Macierz (5,5):\n";
		Matrix m2 = m0.subtract(m1);
		m2.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}
	try
	{
		Matrix m0(5, 6);
		Matrix m1(4, 5);
		cout << "Macierz (3,5) * Macierz (5,4):\n";
		Matrix m2 = m0.multiply(m1);
		m2.print();
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}
	try
	{
		cout << "Proba otwarcia pliku z danymi\n";
		Matrix m0(5);
		m0.store("dane", "test");
	}
	catch (int ex)
	{
		cerr << "ERROR: " << ex << endl;
	}
}
int main()
{
	test_przeciazen();
	//test_bledow();
	//test();
	return 0;
}



void test()
{
	cout << "Konstruktor przyjmujacy dwa argumenty:\n";
	Matrix m0(11, 6);
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