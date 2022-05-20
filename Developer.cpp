//file created by IT21233258

#include <iostream>
#include <string.h>
#include "Customer.h"
using namespace std;

Customer::Customer(string name, string adress, int age) {
    this->name = name;
    this->adress = adress;
    this->age = age;

}

Customer::~Customer()
{
    cout<<"Customer object destroyed"<<endl;
}
