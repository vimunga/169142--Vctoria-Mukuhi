# include <iostream>
using namespace std;
int main()
{
    string firstName, lastName, fullName, favoriteMeal, favoriteProfile;
    //prompt user for their firstName
    cout << " please enter your firstName: ";
    getline(cin, firstName);

     //prompt user for their lastName
    cout << " please enter your lastName: ";
    getline(cin, lastName);
    
    //prompt user for their fullName
    cout << " please enter your fullName: ";
    getline(cin, fullName);

     //prompt user for their favoriteMeal
    cout << " please enter your favoriteMeal : ";
    getline(cin, favoriteMeal);

     //prompt user for their favoriteProfile
    cout << " please enter your favoriteProfile: ";
    getline(cin, favoriteProfile);

    //output information
    cout<<" your firstName is: "<< firstName << endl;
    cout<< " your lastName is: "<< lastName << endl;
    cout<< "your fullName is: "<< fullName <<endl;
    cout<<" your favoriteMeal: "<< favoriteMeal << endl;
    cout<< "  your favoriteProfile: "<<favoriteProfile <<endl;
    
    return 0;
}