#include <string.h>
#include <iostream>
#include "Staff.h"
using namespace std;
staff::staff(int id, string name, string contact, double salary, string position)
{
    this->id = id;
    this->name = name;
    this->contact = contact;
    this->salary = salary;
    this->position = position;
}

staff::~staff()
{
}
