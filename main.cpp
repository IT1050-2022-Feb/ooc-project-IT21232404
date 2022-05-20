//File created by IT21232404
#include <iostream>
#include "customer.h"
#include "Application.h"
#include "Developer.h"
#include "Feedback.h"
#include "Payment.h"
#include "plan.h"
#include "Report.h"
#include "staff.h"

using namespace std;

int main() {
    //create instance of classes
    Customer customer1("CusName" , "CusAdress" , 20);
    Application application1("AppName" );
    Developer developer1("DevName"  , 22, "DevAdress");
    Feedback feedback1("Feedbackdescription1");
    Payment payment1(1500.00 ,"01/01/2020");
    plan plan1("PlanName" , 10);
    Report report1("ReportName" , 15);
    staff staff1("StaffName" , 28 ,"StaffAdress" , 20000.00);

    cout << "DONE!" << endl;
    

    return 0;
}





