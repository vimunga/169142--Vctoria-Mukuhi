#include<iostream>
using namespace std;
void myFunction()
{
    //function code block
    //local variable declarations and initialization
    int locallVar = 45;
    const int age = 30;//constant local variable
    cout<< "myFunction locallVar= "<< locallVar<< endl;
    }
int main()
{
// function code
//local variable declarations and initialization
int locallVar = 46;
const int age = 30;// constant local variable
cout<<" mainlocalVar="<<locallVar<<endl;
myFunction();

return 0;
}
