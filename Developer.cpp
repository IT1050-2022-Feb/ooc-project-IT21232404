#include <iostream>
#include <string.h>
#include "Developer.h"
using namespace std;
Developer::Developer(int Id, string name, string contact, string email) {
    this->Id = Id;
    this->name = name;
    this->contact = contact;
    this->email = email;

}

Developer::~Developer()
{
}