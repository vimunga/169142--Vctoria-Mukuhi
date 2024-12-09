// sum of integers of 20 -25 using while loop
# include <iostream>
using namespace std;
int main ()
{
    // variables declarations
    int num = 20, sum = 0;
    while ( num <= 25) {
        sum += num;
        num ++;
    }
    cout << "  The sum is: " << sum << endl;
    return 0;
}