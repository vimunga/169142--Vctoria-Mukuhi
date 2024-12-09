//Write a simple C++ program using if…else-if…else conditional (decision) structure to
//out an appropriate full name and grade of a student depending on the score entered by
//the user. Ask the user to input the full name of the student, the course and the score.

# include <iostream> 
# include <string> 
using namespace std;
int main()
{
    // variables declarations
    string fullName, Course;
    int Score;
    char grades;

    //inputing all thestudent details
    cout << " Enter the student's fullName :"<< endl;
    getline( cin, fullName);

    cout << " Enter the Course: "<< endl;
    getline( cin, Course);

    cout << " Enter the Score: "<< endl;
    cin >> Score;

    //determinations of the grades based on the scores 
    if (Score >= 70)
    {
        grades = 'A';

    } else if(Score >= 60)
    {
        grades = 'B';

    } else if (Score>= 50){
        grades ='C';

    }else if (Score>= 40){
        grades = 'D';
    }else if (Score >= 0)// assuming the grades are below 40
    {
        grades = 'F'
    }else {
        cout <<" \n Invalid score. please enter the score below 0 and 100 to continue."<< endl;
        return 1. //Exiting the programsfor invalid score and going back.
    }

    // displaying the output
    cout << " \n. studentdetails: "<< endl;
    cout << " FullName"<< fullName endl;
    cout << "Course"<< Course <<endl;
    cout << "Score"<< Score << endl;
    cout << "grades"<< grades<< endl;
    
    return 0;
    }
 