#include <string.h>
#include <iostream>
using namespace std;
class Payment
{
private:
    int id;
    double amount;
    string date;
    string method;
    string status;
    string email;

public:
    Payment(int id, double amount, string date, string method, string status, string email);
    ~Payment();
};
