//unit2.hw
//Group members: Katie Kwatinetz, Lanaiya Walters

#include <stdio.h>

int main()
{
    /*
    Enter the hw average score:
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
    float midterm1, midterm2, Final;
    char startOver;
    int counter = 0;
    int finalScore;
    char letterGrade;
    
    do
    {
        printf ("Enter the hw average score: ");
        scanf ("%f", &hw);
        while ((hw > 100 || hw < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid score. Try again: ");
            scanf ("%f", &hw);
        }
        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }


        counter = 0;
        printf ("Enter the project average score: ");
        scanf ("%f", &project);
        while ((project > 100 || project < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid score. Try again: ");
            scanf ("%f", &project);
        }
        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }


        counter = 0;
        printf ("Enter lab average score: ");
        scanf ("%f", &lab);
        while ((lab > 100 || lab < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid score. Try again: ");
            scanf ("%f", &lab);
        }
        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }


        counter = 0;
        printf ("Enter midterm1, midterm2, and the final: ");
        scanf ("%f %f %f", &midterm1, &midterm2, &Final);
        while ((midterm1 > 100 || midterm1 < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid midterm1 score. Try again: ");
            scanf ("%f", &midterm1);
        }
        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }


        counter = 0;
        while ((midterm2 > 100 || midterm2 < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid midterm2 score. Try again: ");
            scanf ("%f", &midterm2);
        }

        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }


        counter = 0;
        while ((Final > 100 || Final < 0) && counter < 2)
        {
            counter++;
            printf ("Invalid final score. Try again: ");
            scanf ("%f", &Final);
        }

        if (counter == 2)
        {
            printf("I’m sorry…You tried too many time.");
            printf("Would you like to start over (Y/N):");
            scanf("%c",startOver);
        }

    }
    while (startOver == 'y' || startOver == 'Y' || startOver == 'x' || startOver == 'X');
    switch(finalScore/10)
    {
        case 10:
        case 9: letterGrade = 'A';
        break;
        case 8: letterGrade = 'B';
        break;
        case 7: letterGrade = 'C';
        break;
        case 6: letterGrade = 'D';
        break;
        default: letterGrade = 'F';
    }
    printf("%c", letterGrade);
    
}
