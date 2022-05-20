//file created by IT21234002

#include <string.h>
#include <iostream>
#include "Staff.h"
using namespace std;
staff::staff(string name, int age, string adress, float salary)
{
    this->name = name;
    this->age = age;
    this->adress = adress;
    this->salary = salary;
}

staff::~staff()
{
}
