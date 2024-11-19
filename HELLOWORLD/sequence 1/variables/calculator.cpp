#include<iostream>
using namespace std;
int main()
{
   // declaring the variables
   int Operation, add, multiply, subtraction, divide;
   float num1, num2;
   char  Operation;
   
   //prompt the user for the input
   cout<<"enter the first number:"<< num1 <<endl;
   cin>>num1;
   
   cout<<" enter the operation (+, -, /, *):"<< Operation<<endl;
   cin>> Operation;

   cout<<" enter the second number:"<< num2 <<endl;
   cin>>num2;

   // performing the calculation Operation Logic
   float result;
   switch(Operation)
   {
    case '+':
     {
        result = num1 + num2;
        cout<<" result: " << result<< endl;
        break;
    }

    case '-':
     {
        result = num1 - num2;
        cout<<" result: " << result<< endl;
        break;
    }

    case '*':
     {
        result = num1 * num2;
        cout<<" result: " << result<< endl;
        break;
    }

    case '/':
    //  {
        if(num2 !=0){
        result = num1 / num2;

        cout<<" result: " << result<< endl;
        break;
        } else  {
        cout<<" error divide by o is not allowed:"<<endl;
        default;
        cout << "Error: Invalid operator." << endl;
            break; 
        }
    }
   return 0;
   }

