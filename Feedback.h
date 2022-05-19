//File created by IT21232404
#include <string.h>
#include <iostream>
using namespace std;
class Feedback
{
private:
    int refId;
    double rating;
    string comment;
    string email;
public:
    Feedback(int refId, double rating, string comment, string email);
    ~Feedback();
};
