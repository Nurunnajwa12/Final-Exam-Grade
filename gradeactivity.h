#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H

//Grade Activity Class Declaration

class GradedActivity 
{
    private:

    double score;

    public:
    
    //Default constructor
    GradedActivity() 
    {score = 0.0;}
    //constructor
    GradedActivity(double s)
    {score = s;}
    void setScore(double s)
    {
        score=s;
    }
    double getScore() const
    {
        return score;
    }
    char getLetterGrade() const;
   
};
#endif

