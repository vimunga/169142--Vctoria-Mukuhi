//Write a C++ program to calculate the area of different shapes using Switch…Case.
 //Read a character (C for Circle, S for Square, R for Rectangle) and corresponding dimensions to calculate and output the area.
# include <iostream> 
# include <cmath>
using namespace std;
int main()
{
char shapes;
cout << " Enter the shape (C for circle, S for square, Rfor rectangle): "<< endl;
cin >> shapes;

switch (case (shapes))
{
    case 'C':
    {
        double radius;
        cout << "Enter the Radius of the circle:" << endl;
        cin >> radius;
        if(radius > 0){
            double area = M_PI*radius* radius;
            cout << " The area of the circle is:" << area << endl;
        } else {
            cout << " The invalid radius value! " << endl;

        }
        break;
    }

    case 'S':
    {
        double sides;
        cout << "Enter te sides length of the square: " << endl;
    cin >> sides;
    if(sides > 0){
        double area = sides * sides;
        cout << " The area of the square is: " << area << endl;
    } else {
        cout << " "
    }
    }
}
}