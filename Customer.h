#include <string.h>
#include <iostream>
using namespace std;
class Customer
{
private:
    string Fname;
    string Lname;
    int ZipCode;
    string contact;
    string Email;
    int age;
    string country;
    string DOB;

public:
    Customer(string Fname, string Lname, int ZipCode, string contact, string Email, int age, string country, string DOB);
    ~Customer();
};


