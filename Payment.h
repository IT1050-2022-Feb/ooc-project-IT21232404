//file created by IT21234002

#include <string.h>
#include <iostream>
using namespace std;
class Payment
{
private:
    
    double amount;
    string date;
  

public:
    Payment(double amount, string date);
    ~Payment();
    void displayPaymentDetails();
    void managePayment();
};
