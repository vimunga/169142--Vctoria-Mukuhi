#include <iostream>
using namespace std;

int mmain()
{
 int age;
 int minAge = 4;
 cout << " please enter the age:" << endl;
 cin >> age;

 if (age >= minAge){
    cout << "Admit to school:" << endl;

 }else {
    int difference = minAge - age;
    cout << " Declined! Minimum age not reached. please apply for readmission in:" << difference << " years." << endl;
 }
 return 0;
}