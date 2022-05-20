#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "gradeactivity.h"

class FinalExam:public GradedActivity

{
    private:
    int numQuestions; // number of questions
    double pointsEach; //Point each questions 
    int numMissed; // Number of question missed

    public:
    //default constructor
    FinalExam()
    {
        numQuestions = 0;
        pointsEach = 0;
        numMissed = 0;
    }

    //constructor
    FinalExam(int questions, int missed)
    {
        set(questions,missed);
    }

    //mutator function
    void set(int,int); //define in finalexam.cpp

    //accessor function
    double getNumberOfQuestions() const
    {return numQuestions;}
    
    double getPointsEach() const
    {return pointsEach;}

    int getNumMissed() const
    {return numMissed;}


    
};
#endif

