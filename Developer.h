//file created by IT21233258
#include <string.h>
#include <iostream>
using namespace std;
class Developer
{
private:
    string name;
    int age;
    string adress;
public:
    Developer(string name, int age, string adress);
    ~Developer();
    void displayDeveloperDetails();
};