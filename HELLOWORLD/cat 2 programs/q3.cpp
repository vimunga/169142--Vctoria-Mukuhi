//Write a C++ program that uses C-style casting to explicitly convert a double to an int.  
# include <iostream>
using namespace std;
int main()
{

// variables declarations
   double number;

    // inputting of the double number
   cout<< " Enter the double number: "<< endl;
   cin >> double number;
    // Performing the C-style casting to convert the  double to int
    //convertion of double to int
    int convertedNumber = (int) number;

    // Output the original and converted values
    cout << " the Original double value: " << number << endl;
    cout << "the Converted int value: " << convertedNumber << endl;

    return 0;
}
