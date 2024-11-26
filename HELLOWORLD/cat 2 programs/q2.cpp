/* Write a C++ program that uses C-style casting to explicitly convert a double to an int.
Answer text Question 7*/
#include <iostream>
using namespace std;

int main() {
    // Declaration nof a double variable
    double number;

    // Prompt the user to enter the double value
    cout << "Enter a double value: ";
    cin >> number;

    // Using of the C-style casting in converting the double into an int
    int convertableNumber = (int)number;

    // Display the output of the original double and the converted int
    cout << "Original double value: " << number << endl;
    cout << "Convertable int value: " << convertableNumber << endl;

    return 0;
}