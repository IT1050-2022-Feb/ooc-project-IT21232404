//file created by IT21233258

#include <iostream>
#include <string.h>
#include "Developer.h"
using namespace std;
Developer::Developer(string name, int age, string adress)
{
    this->name = name;
    this->age = age;
    this->adress = adress;
}
    
Developer::~Developer()
{
}