# include <iostream>
using namespace std;

int main()
{
    // declare variables
double buyingPrice, sellingPrice, profit;

// prompt the user buying input 
cout << " Enter the buyingPrice of the car:" << endl;
cin >> buyingPrice;

//prompt the user selling input 
cout << " Enter the sellingPrice of the car:" << endl;
cin >> sellingPrice;

// calculating the profit
profit = sellingPrice - buyingPrice;

// displaying the output of the motor vehicle
cout << "profit in ksh." << profit << endl;
return 0;
 }