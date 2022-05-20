//file created by IT21234002

#include <string.h>
#include <iostream>
#include "Payment.h"
using namespace std;
Payment::Payment(double amount, string date)
{
    this->amount = amount;
    this->date = date;
}

Payment::~Payment()
{
}
