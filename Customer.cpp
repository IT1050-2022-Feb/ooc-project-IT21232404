//file created by IT21232404
#include <iostream>
#include <string.h>
#include "Customer.h"
using namespace std;

Customer::Customer(string Fname, string Lname, int ZipCode, string contact, string Email, int age, string country, string DOB) {
    this->Fname = Fname;
    this->Lname = Lname;
    this->ZipCode = ZipCode;
    this->contact = contact;
    this->Email = Email;
    this->age = age;
    this->country = country;
    this->DOB = DOB;

}

Customer::~Customer()
{
    cout<<"Customer object destroyed"<<endl;
}


