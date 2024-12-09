# include <iostream>
# include < string>
using namespace std;
int  main()
{
    //variables declarations
    string correctPassword = " password2030";// setting of the correct passwords
    string user input;
    int attempts =0;
    //using while loop
    while (attemppts < 3) 
    {
        cout << " Enter your password: "<< endl;
        cin >> userInput;

        //conditional statements declaring if the user input is equal to correct password
        if( userInput == correctPassword)
        {
            cout << " Access has been granted! " << endl;
            return 0; //someone can exit if the program is correct
        }else {
            // number of attempts
            attempts+++;
            cout << " the wrong password has been keyed in. Attempts left: "<< 3- attempts << endl;

        }

    }
    cout << " the password has been blocked! "<< endl;
    return 0;
}








   
    