#include <iostream>
using namespace std;
// declare an external variable 
extern int globalVar;
int main()
{
// acess the external variable
cout  <<" In  main, globalVar: "<<globalVar << endl;
// modify the eternal variable
globalVar = 200;
cout<< "In  main after modification, globalVar : "<<globalVar<<endl;
return 0;


}

