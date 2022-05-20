//file created by IT21297922
#include <string.h>
#include <iostream>
#include "Plan.h"
using namespace std;

plan::plan(int Id, string package, string period)
{
    this->Id = Id;
    this->package = package;
    this->period = period;
}

plan::~plan()
{
}
