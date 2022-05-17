#include <string.h>
#include <iostream>
using namespace std;
class staff
{
private:
    int id;
    string name;
    string contact;
    double salary;
    string position;

public:
    staff(int id, string name, string contact, double salary, string position);
    ~staff();
};
