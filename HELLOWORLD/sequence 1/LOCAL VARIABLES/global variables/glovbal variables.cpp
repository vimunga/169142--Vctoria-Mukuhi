#include <iostream>
using namespace std;
//global variable declaration and initialization
int globalVar =30;
const int age = 25; //constant global variable . value will not change
void myFunction()
{
    globalVar = 200;
    cout<<" myFunction globalVar: "<<globalVar<<endl;
}
int main()
{
    //function code block
    //int age= 40;
    cout<<age<<endl;
    cout<<" Main globalVar: "<< globalVar<<endl;
    myFunction();
    return 0;

}