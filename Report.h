//File created by IT21232640

#include <string.h>
#include <iostream>
using namespace std;
class Report
{
private:
    int RefId;
    string Name;
    string Title;
    string Date;
    string type;


public:
    Report(int RefId, string Name, string Title, string Date, string type);
    ~Report();
};

