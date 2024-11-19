# include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age of child: ";
    cin >> age;
    if(age >= 4)
    {
        cout << " Admit to school:";
    } else{
        cout << " Decline! Minimum age not reached." << endl;
    }

    //using ternary operator
    string Message = ( age>= 4) ? " Admit to scjool." : " decline ! Minimum age not reached";
    cout << Message << endl;

    return 0;
}