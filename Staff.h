//file created by IT21234002

#include <string.h>
#include <iostream>
using namespace std;
class staff
{
private:
    
    string name;
    int age;
    string adress;
    float salary;
    

public:
    staff(string name, int age, string adress, float salary);
    ~staff();
    void displayStaffDetails();
};
