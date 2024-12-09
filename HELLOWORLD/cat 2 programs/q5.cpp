//Write a program to determine whether a given number is positive, negative, or zero using an if-else statement.
# include <iostream>
using namespace std;
int main()
{
    //variables declarations
    int number;
    // inputs and declaration of number
    cout << " Enter the number: "<< endl;
    cin  >> number;

    //validating the numbers whether they are positive, negative and or zero
    if (number > 0)
    {
        cout << " the number is considered positive: " <<endl;
    } else if ( number < 0)
    {
        cout <<" The number is considered negative: "<< endl;

    } else
    {
        cout << "the number is considered to be zero: " << endl; 
    }
    return 0;
}

