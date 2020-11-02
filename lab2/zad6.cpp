#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

template < typename T > 
void zamiana(T **a, T **b)
{
	T* temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	double a = 0, b = 0;
	string wyraz1, wyraz2;

	cout << "Podaj a: ";    cin >> a;
	cout << "Podaj b: ";    cin >> b;
	cout << "Wpisz pierwszy wyraz: ";    cin >> wyraz1;
	cout << "Wpisz drugi wyraz: ";       cin >> wyraz2;

	double *wsk_a = &a;
	double *wsk_b = &b;
	string *wsk_1 = &wyraz1;
	string *wsk_2 = &wyraz2;

	zamiana(&wsk_a, &wsk_b);
	zamiana(&wsk_1, &wsk_2);

	cout << "Po zamianie: " << endl;
	cout << "a: " << *wsk_a << "   " << "b: " << *wsk_b << endl;
	cout << "Wyraz 1: " << *wsk_1 << "   " << "Wyraz 2: " << *wsk_2 << endl;

}