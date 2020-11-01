#include <iostream>
#include <string>

using namespace std;

template <typename T>
void zamiana(T *a, T *b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	string wyraz1, wyraz2;

	cout << "Podaj a: ";    cin >> a;
	cout << "Podaj b: ";    cin >> b;
	cout << "Wpisz pierwszy wyraz: ";    cin >> wyraz1;
	cout << "Wpisz drugi wyraz: ";       cin >> wyraz2;
	
	zamiana(&a, &b);
	zamiana(&wyraz1, &wyraz2);

	cout << "Po zamianie:" << endl;
	cout << "a: " << a << "   " << "b: " << b << endl;
	cout << "Wyraz 1: " << wyraz1 << "   " << "Wyraz 2: " << wyraz2 << endl;



}