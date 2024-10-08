//preprocessor directives, directive input / output
#include <iostream>
//preprocessor directives, directive input / output
#include <fstream>
#include <string>
using namespace std;

int main(){
    /*writing to a file . output .txt file will be created in the directory of this source file
    */
   ofstream outFile("output.txt");
   outFile << "writing to a file." <<endl;
   outFile.close ();
   // reading from a file
   ifstream inFile("output.txt");
   string content;
   while (std::getline(inFile, content))
   {
   cout << content << endl;
} 
   inFile.close();//close the file after reading its contents
   return 0;
}