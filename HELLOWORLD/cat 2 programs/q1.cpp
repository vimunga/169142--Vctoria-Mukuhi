// a program that accepts a user's age and determines if it is eligible to vote 18 years and above

# include <iostream>
using namespace std;
int main()
{
// declaration of  varaibles
int age;
//prompting of the user to enter their ages

cout<< " Enter your age: " << age << endl;
cin>> age;

// checking out if the ages entered are eligible or not to vote

if( age>= 18)
 
{
cout << " You are successfully eligible to vote! "<<  endl;
}
else
{ 
cout << " Sorry, you are not eligible to vote. You must attain 18 yrs old to vote." << endl;
}
return 0;
}