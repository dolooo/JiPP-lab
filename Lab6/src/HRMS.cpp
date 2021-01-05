#include "HRMS.h"

void HRMS::add(Employee employee, string departmentId, double salary)
{
	string employeeid = employee.getId();

	if (salary < 0)
	{
		throw invalid_argument("Podane zarobki powinny byc wieksze od 0\n");
	}

	if (departmentId != employee.getDid())
	{
		throw invalid_argument("ID dzialu rozni sie od ID dzialu podanego pracownika\n");
	}

	list<string>::iterator it;
	for (it = employees_id.begin(); it != employees_id.end(); it++)
	{
		if (*it == employeeid)
		{
			throw invalid_argument("Pracownik o podanym numerze ID juz istnieje\n");
		}
	}

	employees_id.push_front(employeeid);
	this->employees[employeeid] = employee;
	this->id_did [employeeid] = departmentId;
	this->salaries[employeeid] = salary;
};

void HRMS::printDepartment(string departmentId)
{
	map<string, string>::iterator it;
	int i = 0;

	if (departmentId=="1") { cout << "-------Administration------" << endl; }
	else if (departmentId == "2") { cout << "-----Health and Safety-----" << endl; }
	else if (departmentId == "3") { cout << "---------Transport---------" << endl; }
	else if (departmentId == "4") { cout << "------------IT-------------" << endl; }
	else if (departmentId == "5") { cout << "-----------Sales-----------" << endl; }
	else cout << "Wrong Department ID number" << endl;

	for (it = id_did.begin(); it != id_did.end(); ++it)
	{
		if (it->second == departmentId)
		{ 
			cout << this->employees[it->first].getId() << " " << this->employees[it->first].getName() << " " << this->employees[it->first].getSurname() << endl;
			i++;
		}
	}

	if (i == 0)
	{
		throw invalid_argument("Nie istnieje ID dzialu o podanym numerze\n");
	}
}

void HRMS::changeSalary(string employeeId, double salary)
{
	if (salary < 0)
	{
		throw invalid_argument("Podane zarobki powinny byc wieksze od 0\n");
	}

	list<string>::iterator it;

    int i = 0;
    for (it = employees_id.begin(); it != employees_id.end(); it++)
    {
        if (*it == employeeId)
            i++;
    }
    if (i == 0)
    {
        throw invalid_argument("Pracownik o podanym numerze ID juz istnieje\n");
    }

	this->salaries[employeeId] = salary;
}

void HRMS::printSalaries()
{
	int counter=0;
	map <string, double>::iterator it;
	for (it = this->salaries.begin(); it != this->salaries.end(); it++)
	{
		{
			++counter;
			cout << "ID: " << this->employees[it->first].getId() << " " << this->employees[it->first].getName() << " "
				<< this->employees[it->first].getSurname() << " DepartmentID: " << this->employees[it->first].getDid()
				<< " " << this->employees[it->first].getPos() << " Salary: " << it->second << endl;
		}
	}
}

bool HRMS::compare(const pair<string, double> &a, const pair<string, double> &b)
{
	return (a.second < b.second);
}

void HRMS::printSalariesSorted()
{
	vector <pair <string, double>> to_sort;
	map <string, double>::iterator itt;
	for (itt = this->salaries.begin(); itt != this->salaries.end(); itt++)
	{
		to_sort.push_back(make_pair(itt->first, itt->second));
	}

	sort(to_sort.begin(), to_sort.end(), compare); //sortowanie malejaco

	vector<pair<string, double>>::iterator it;
	for (it = to_sort.begin(); it != to_sort.end(); it++)
	{
		cout << "ID: " << this->employees[it->first].getId() << " " << this->employees[it->first].getName() << " "
			<< this->employees[it->first].getSurname() << " DepartmentID: " << this->employees[it->first].getDid()
			<< " " << this->employees[it->first].getPos() << " Salary: " << it->second << endl;
	}
}
