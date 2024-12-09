/// write a program that entails passing 50 while failed below 50
# include <iostream>
using namespace std;
int mauin()
{
// variables declarations
int Scores;

// inputting the students scores
cout <<" Enter the student's Scores:" << endl;
cin >> Scores;

//confirming through checking if the students pass or failed the exams
if( Scores >= 50){
    cout << " congratulations! the students has passed "<< endl;

} else {
    cout<< " poor! the students has failed" << endl;
}
return 0;
}