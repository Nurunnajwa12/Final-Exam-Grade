#include<iostream>
#include<iomanip>
#include "finalexam.h"

using namespace std;

//set function
//the parameters are the number of question
// and the number of questions missed

void FinalExam::set(int questions, int missed)
{
double numericScore; // hold numeric store

//set number of question and number missed

numQuestions=questions;
numMissed=missed;

//calculate point of each questions
pointsEach= 100.0;

//calculate numeric score 
numericScore=100.0-(missed*pointsEach);

//call inherited setScore function to set score
setScore(numericScore);

}

int main()
{
    int questions;
    int missed;

    //get number of question in final FinalExam
    cout<<"Number of questions: ";
    cin >> questions;

    //get number of question the student numMissed
    cout<<"Number of question missed: ";
    cin >> missed;

    //define finalexam obj and initialize with value entered

    FinalExam test( questions, missed);

    //Display test results
    cout<<setprecision(2);
    cout<<" Each questions count "<<test.getPointsEach()<<"points. ";
    cout<<" The exam score is "<<test.getScore()<<endl;
    cout<<" The exam grade is "<<test.getLetterGrade()<<endl;

    return 0;

}



