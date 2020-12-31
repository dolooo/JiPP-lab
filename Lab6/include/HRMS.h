#ifndef HRMS_h
#define HRMS_h
#include "employee.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <map>
#include <list>
#include <vector>

using namespace std;

class HRMS
{
private:
	map <string, Employee> employees; //kontener przechowujacy pracownikow
	list <string> employees_id; //lista z id pracownikow
	map <string, string> id_did; //mapowanie pomiedzy identyfikatorem dzialu a identyfikatorami wszystkich pracownikow danego dzialu
	map <string, double> salaries; //kontener przechowujacy zarobki pracownikow
	
public:
	void add(Employee employee, string departmentId, double salary);
	void printDepartment(string departmentId);
	void changeSalary(string employeeId, double salary);
	void printSalaries();
	void printSalariesSorted();
	static bool compare(const pair<string, double> &a, const pair<string, double> &b);
};
#endif