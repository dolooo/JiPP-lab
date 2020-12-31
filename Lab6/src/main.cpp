#include "employee.h"
#include "HRMS.h"
#include <vector>
#include <conio.h>

using namespace std;

	Employee e1("1", "John", "Travolta", "1", "Administracja");
	Employee e2("2", "Adam", "Sandler", "2", "BHP");
	Employee e3("3", "Penelope", "Cruz", "1", "Administracja");
	Employee e4("4", "Marcin", "Najman", "4", "IT");
	Employee e5("5", "Elon", "Musk", "3", "Transport");
	Employee e6("6", "Leonardo", "Dicaprio", "5", "Sprzedaz");
	Employee e7("7", "Marilyn", "Monroe", "1", "Administracja");
	Employee e8("8", "Freddie", "Mercury", "3", "Transport");
	Employee e9("9", "Janusz", "Kowalski", "5", "Sprzedaz");
	Employee e10("10", "Grazyna", "Kowalska", "4", "IT");

int main()
{
	HRMS test;
	test.add(Employee(e1), "1", 2500);
	test.add(Employee(e2), "2", 2700);
	test.add(Employee(e3), "1", 2900);
	test.add(Employee(e4), "4", 4400);
	test.add(Employee(e5), "3", 6600);
	test.add(Employee(e6), "5", 7140);
	test.add(Employee(e7), "1", 5500);
	test.add(Employee(e8), "3", 2560);
	test.add(Employee(e9), "5", 8990);
	test.add(Employee(e10),"4", 7760);
	test.printDepartment("1"); //administracja
	test.printDepartment("2"); //BHP
	test.printDepartment("3"); //transport
	test.printDepartment("4"); //IT
	test.printDepartment("5"); //sprzedaz
	test.changeSalary("1", 4444);
	test.changeSalary("9", 6666);
	test.changeSalary("10", 9999);
	test.printSalaries();
	cout << endl;
	cout << endl;
	test.printSalariesSorted();
	return 0;
}