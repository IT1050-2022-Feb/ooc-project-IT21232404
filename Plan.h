//file created by IT21297922
#include <string.h>
#include <iostream>
using namespace std;
class plan
{
private:
   string name;
   int duration;      
public:
    plan(string name, int duration);
    ~plan();
    void displayPlanDetails();
};