#include "employee.h"

Employee::Employee() { ; }

Employee::Employee(string idd, string namee, string surnamee, string didd, string poss)
{
	this->id = idd;
	this->name = namee;
	this->surname = surnamee;
	this->did = didd;
	this->pos = poss;
}

string Employee::getId() { return this->id; }
string Employee::getName() { return this->name; }
string Employee::getSurname() { return this->surname; }
string Employee::getDid() { return this->did; }
string Employee::getPos() { return this->pos; }


