#ifndef Employee_h
#define Employee_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
private:
	string id; //ID
	string name; //Imie
	string surname; //Nazwisko
	string did; //ID dzialu
	string pos; //Stanowisko
public:
	Employee();
	Employee(string idd, string namee, string surnamee, string didd, string poss);
	string getId();
	string getName();
	string getSurname();
	string getDid();
	string getPos();
};
#endif