#include<iostream>
using namespace std;
//function that  takes two integer parameters a and b
void addAndDisplay(int value1, int value2)
{
    int sum = value1 + value2;// sum is a local variable within a function
    cout<< "sum of "<<value1 <<"and"<< value2 << "is" << sum << endl;
}
int main()
{
    int arg1 = 10;
    int arg2 = 20;
    //call the function with arg 1 and arg 2 as arguements
    addAndDisplay(arg1, arg2);
    return 0;
}