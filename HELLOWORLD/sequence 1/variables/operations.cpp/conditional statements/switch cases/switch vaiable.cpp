# include <iostream>
using namespace std;
int main()
{
    // switch variables
    int option;
    cout << " Hi. This is your BBIT Sem1 Timetable ( May -Aug 2024)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday" << endl;
    cin >> option;
    switch (option)
    {
        case 1:
        cout <<" Monday Classes\n.............." << endl;
        cout <<"\t1. BBIT 1106:  Math for Biz" << endl;
        cout << "\t2. BBIT 1102: Intro to programming" << endl;
        break;

        
        case 2:
        cout <<" Tuesday Classes\n.............." << endl;
        cout <<"\t1. BBIT 1102:  Math for Biz" << endl;
        cout << "\t2. BBIT 1104: Ethics" << endl;
        break;

        case 3:
        cout <<" Wednesday Classes\n.............." << endl;
        cout <<"\t1. BBIT 1106:  Math for Biz" << endl;
        cout << "\t2. BBIT 1104: Theology" << endl;
        cout << "\t3. BBIT 1101: Fundamentals of IT" << endl;
        break;

        case 4:
        cout <<" Thursday Classes\n.............." << endl;
        cout <<"\t1. BBIT 1105:  Accounting" << endl;
        cout << "\t2. BBIT 1101: Fundamentals of IT" << endl;
        break;
        
         case 5:
        cout <<" Friday Classes\n.............." << endl;
        cout <<"\t1. BBIT 1103: Business  Computing" << endl;
        break;


        default:
        cout <<" Invalid Input";

    }
    return 0;
}