#include<iostream>
#include "gradeactivity.h"
using namespace std;

char GradedActivity :: getLetterGrade() const 
{
     {
        char letterGrade;
        if (score>89)
            letterGrade ='A';
        else if(score>79)
            letterGrade='B';
        else if(score>69)
            letterGrade='C';
        else if (score>59)
            letterGrade='D';
        else
            letterGrade='F';
        
        return letterGrade;
    }
}

int main()
{
    double testScore ;

    GradedActivity test;
    cout<<"Enter your numeric test score: ";
    cin >> testScore;
    
    //Store numeric taste
    test.setScore(testScore);

    //Display letter grade
    cout<<"The grade for that test is "
    << test.getLetterGrade()<<endl;








}
