// write a program that takes a student's marks as input and display their grade using nested if else- statements
#include <iostream>
using namespace std;

int main() {
    // dec;laration of variables
    int marks;
    char grades;

    // Ask the user to enter the marks
    cout << "Please, Enter the student's marks (0 - 100): ";
    cin >> marks;

    // Validate input
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered. Please try to enter a value between 0 and 100." << endl;
    } else {
        // Determine grade using nested if-else statements
        if (marks >= 80) {
            grades = 'A';
        } else {
            if (marks >= 60) {
                grades = 'B';
            } else {
                if (marks >= 40) {
                    grades = 'C';
                } else {
                    grades = 'F'; // Below 40 is considered to be a fauilure
                }
            }
        }

        // Display the output of the student's grades
        cout << "Please show the student's grades are:" << grades << endl;
    }

    return 0;
}