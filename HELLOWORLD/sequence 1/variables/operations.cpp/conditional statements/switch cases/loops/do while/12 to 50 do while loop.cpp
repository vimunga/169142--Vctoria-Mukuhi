# include<iostream>
using namespace std;
int main()
{
    int num = 12;
    int sum = 0;
    do
    {
        cout << num;
        cout << ",";
        num+= 2;

    } while (num<= 50);
    return 0;
}