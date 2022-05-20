//File created by IT21232640
#include <string.h>
#include <iostream>
using namespace std;
class Report
{
private:
  
    string Name;
    int duration;



public:
    Report(string Name, int duration);
    ~Report();
    void displayReportDetails();
    void generateReport();
};
