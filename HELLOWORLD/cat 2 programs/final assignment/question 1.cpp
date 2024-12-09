//1. Create a C++ function to check if a customer is qualified for a loan given the conditions below.
// The function name must be your first name followed by the word
// Capture the customer details from the user.
//Write a main function to test your function.
//Conditions
//Age must be above 22 years
//Bank balance more than 50,000
//CRB status should be good
//Must have been a customer for more than 6 months

# include <iostream>
# include <string>
using namespace std;
boolLeahLoanCalculator(int age,double bankBalance,string crbStatus, int montAsCustomer)
    {
        return ( age > 22 && bankBalance > 50000 && crbStatus == "good" && monthAsCustomer > 6);
}

int main ()
{
    //variables declarations
   int age, monthAsCustomers;
   double bankBalance;
   string crbStatus;

   cout << " Enter then age of the customer:" << endl;
   cin >> age;
   cout << " Enter the bamkBalance:" << endl;
   cin >> bankBalance;
   cout << " Enter the crbStatus (good/ bad) :" << endl;
   cin >> crbStatus;
   cout << " Enter the monthAsCustomer :" << endl;
   cin >> monthAsCustomer;
   if (LeahloanCalculator( age, bankBalance, crbStatus, monthAsCustomers))
   {
    cout << " A customer that qualifies for the loan." << endl;
   }
   else{
    cout << "a customer that does not qualify for the loan. " << endl;
   }
   return 0;
   }

