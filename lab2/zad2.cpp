#include <iostream>

using namespace std;

void zamiana(int &a, int &b)
{
		swap(a, b);
		cout << "Wartosci a i b zostaly zamienione!" << endl;
		cout << "a= " << a <<"   "<< "b= " << b << endl;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "Podaj a: ";    cin >> a;
	cout << "Podaj b: ";    cin >> b;

	zamiana(a, b);

}