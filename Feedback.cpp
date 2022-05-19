//File created by IT21232404
#include <iostream>
#include <string.h>
#include "Feedback.h"
using namespace std;

Feedback::Feedback(int refId, double rating, string comment, string email)
{
    this->refId = refId;
    this->rating = rating;
    this->comment = comment;
    this->email = email;
}

Feedback::~Feedback()
{
}
