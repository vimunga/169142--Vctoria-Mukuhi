# include <iostream>
using namespace std;
int main()
{
    //variables de claration 
    int num, sum =0;
    do {
        cout << " Enter the number (0 to stop): " << endl;
        cin num;
        sum += num;
    
    } while ( num != 0);
    // the last zero is added to the sum, so subtract it
    cout << " The total sum is: "<< sum << endl;
    return 0;
}