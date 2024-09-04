//unit2.hw
//Group members: Katie Kwatinetz, Lanaiya Walters

#include <stdio.h>

int main()
{
    /*
    Enter the hw average score: HI!!!!
    Invalid score. Try again:
    Enter the project average score:
    Invalid score. Try again:
    Enter lab average score:
    Invalid score. Try again:
    Enter midterm1, midterm2 and the final:
    Invalid ---. Try again:
    Here are all your average scores:
    HW          : 75.50
    PROJECTS    : 63.20
    LABS        : 100.00
    MIDTERM1    : 78.00
    MIDTERM2    : 90.00
    FINAL       : 63.00
    ------------------------------------
    OVERALL AVERAGE : 75.09
    (75.50*.2 + 63.20*.2 + 100.00*.05 + (78.00+90.00+63.00)*.55/3 is 75.09)
    ------------------------------------
    FINAL LETTER GRADE: C
    Would you like to start over (Y/N):
    *************************************
    Good-bye!

    If yes - start over from top
    If score or letter incorrectly entered - give 3 tries then terminate run (float between 0-100 or Y,y,n,N)
    All grades between 0-100
    All average scores need to be declared as floats
    *************************************
    */

    float hw; 
    float project;
    float lab;
    float midterm1, midterm2, final;
    do
    {
    printf ("Enter the hw average score: ");
    scanf ("%f", &hw);
    printf ("Enter the project average score: ");
    }
    while (StartOver == 'y' || StartOver == 'Y' || StartOver == 'x' || StartOver == 'X');

}
