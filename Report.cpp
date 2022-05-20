//File created by IT21232640
#include <string.h>
#include <iostream>
#include "Report.h"
using namespace std;

Report::Report(int RefId, string Name, string Title, string Date, string type) {
    this->RefId = RefId;
    this->Name = Name;
    this->Title = Title;
    this->Date = Date;
    this->type = type;
    
}

Report::~Report()
{
}
