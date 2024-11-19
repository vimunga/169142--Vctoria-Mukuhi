# include <iostream>
using namespace std;
int main(){
    // declare string variable myName
    string myName, description;

    //prompt user for their full name
    cout << " please enter your full name: ";
    getline(cin, myName);

     //prompt user for their description
    cout << " please describe yourself: ";
    getline(cin, description);
    
    cout<<" your name is: "<< myName << endl;
    cout<< " you said the following about yourself:" << description<< endl;
    return 0;
}