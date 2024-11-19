# include <iostream>
using namespace std;
int main()
{
    // declare variables
    int age;
    string childName;

    // prompt the user input
    cout <<" Enter the child's fullname : " << childName << endl;
    getline (cin, childName);

    // prompt the cjhild'Name age
    cout << " Please enter the child's age: ";
    cin >> age;
    
    if (age >= 7){
        cout << childName << " Admitted to Grade School: " << endl;
    }
    else if (age >= 5 && age<= 6)
    {
        cout << childName <<" Admitted to kindergarten: " << endl;
    }
    else if ( age>= 3 && age<= 4)
    {
        cout << childName << " Admitted to preschool: " << endl;

    }
    else if ( age>= 1 && age<= 2)
    {
     cout << childName << "Admitted to playGroup:" << endl;
    }
    else
    {
      cout << childName << " Has been rejected: "<< endl;
    }
    return 0;
    
    }