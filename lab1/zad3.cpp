#include <iostream>

using namespace std;

void BMI_check(double height, double weight)
{
	double bmi;
	bmi = (weight) / (height * height);
	if (bmi < 16)					 cout << "Wyglodzenie!!";
	if (bmi >= 16	&& bmi <= 16.99) cout << "Wychudzenie!";
	if (bmi >= 17	&& bmi <= 18.49) cout << "Niedowaga";
	if (bmi >= 18.5 && bmi <= 24.99) cout << "Waga prawidlowa - tak trzymaj!";
	if (bmi >= 25	&& bmi <= 29.99) cout << "Nadwaga";
	if (bmi >= 30	&& bmi <= 34.99) cout << "I stopien otylosci!";
	if (bmi >= 35	&& bmi <= 39.99) cout << "II stopien otylosci!";
	if (bmi >  40)					 cout << "Otylosc skrajna!!";
}

int main(int argc, char *argv[])
{
	double wzrost, waga;
	cout << "----Body Mass Index----" << endl;
	cout << "Podaj wzrost [m]: ";   cin >> wzrost;
	cout << "Podaj wage [kg]: ";    cin >> waga;

	BMI_check(wzrost, waga);

	return 0;
}