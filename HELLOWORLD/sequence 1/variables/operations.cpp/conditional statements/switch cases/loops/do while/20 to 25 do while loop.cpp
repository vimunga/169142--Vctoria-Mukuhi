//sem of integers input usin do while loop
# include < iostream>
using namespace std;
int main()
{
    // varaiables declaration
    int num = 20, sum = 0;
    do {
        sum += num;
        num ++;

    } while (num <= 25);
    cout << "The sum is:"<< sum << endl;
    return 0;
}