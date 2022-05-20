//File created by IT21232404

#include <string.h>
#include <iostream>
using namespace std;
class Customer
{
private:
    string name;
    string adress;
    int age;


public:
   Customer(string name, string adress, int age);
    ~Customer();
    void displayCustomer();
};



