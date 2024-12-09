//Outputing the odd numbers between 12 and 50

#include <iostream>
using namespace std;
int main()
{
    for (int k = 13; k <= 49; k += 2) { // Starting from  13 (first odd number >= 12)
        cout << k << " " << endl;
    }
    return 0;
}