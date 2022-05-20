//File created by IT21232640
#include <iostream>
#include <string.h>
#include "Application.h"
using namespace std;

Application::Application(int Id, string Name, string Category, string Type, string Status)
{
    this->Id = Id;
    this->Name = Name;
    this->Category = Category;
    this->Type = Type;
    this->Status = Status;
}

Application::~Application()
{
}

