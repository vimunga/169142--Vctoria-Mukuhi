# include <iostream>
using namespace std;

int main()
{
// declare  necesarry variables
string childName, interest;
int age;

//prompt the user for the childName
cout << " please enter the child's full name: ";
getline( cin, childName);
cout << " Please enter the child's age: ";
cin >> age;

if (age >= 4 && age <= 10)
{
    cout << " please enter the child's interest: ";
    cin >> interest;
    if( interest == " soccer")// first neste if
    {
        cout << childName << " has been aAdmitted and Assigned to the soccer play group. " << endl;
    } 
    else if ( interest == " art") // second nested if
    {
        cout << childName << "  has been admitted and assigned to the Artplay group." << endl;
    }
    else
    {
      cout << childName << " has been admitted and assigned to other groups. " << endl;

    }
}
else{
    cout << " Admission unsuccessful." << childName << " 's age is invalid " << endl;
    }
return 0;
}