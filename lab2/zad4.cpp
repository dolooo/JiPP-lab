#include <iostream>

using namespace std;

int dwa_dzialania(int a, int b, int* iloczyn)
{
	*iloczyn = a * b;
	return a + b;
}

int main()
{
	int a = 0;
	int b = 0;
	int iloczyn = 0; 

	cout << "Podaj a: ";    cin >> a;
	cout << "Podaj b: ";    cin >> b;

	cout <<"Suma: "<<dwa_dzialania(a, b, &iloczyn) << endl;
	cout << "Iloczyn: " << iloczyn;

}