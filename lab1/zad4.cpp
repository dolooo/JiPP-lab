#include <iostream>

using namespace std;

void liczby_skojarzone()
{
	int a, b, suma_a = 0, suma_b = 0;
	cout << "----Liczby skojarzone???----" << endl;
	cout << "Podaj pierwsza liczbe: ";   cin >> a;
	cout << "Podaj druga liczbe: ";    cin >> b;
	
	
	if (a <= 1 || b <= 1) 
	{
		cout << "Liczby musza byc wieksze od 1!"; exit(0);
	}
	else 
	{
		for (int i = 1; i < ((a / 2) + 1); i++)
		{
			if (a % i == 0) suma_a += i;
		}
		for (int i = 1; i < ((b / 2) + 1); i++)
		{
			if (b % i == 0) suma_b += i;
		}
		if ((suma_a == (b + 1)) && (suma_b == (a + 1))) cout << "Podane liczby sa skojarzone";
		else cout << "Podane liczby nie sa skojarzone";
	}


}

int main(int argc, char *argv[])
{
	liczby_skojarzone();

	return 0;
}