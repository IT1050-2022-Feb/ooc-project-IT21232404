//file created by IT21234002

#include <string.h>
#include <iostream>
#include "Payment.h"
using namespace std;
Payment::Payment(int id, double amount, string date, string method, string status, string email)
{
    this->id = id;
    this->amount = amount;
    this->date = date;
    this->method = method;
    this->status = status;
    this->email = email;
}

Payment::~Payment()
{
}
