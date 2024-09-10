/unit2.hw
//Group members: Katie Kwatinetz, Lanaiya Walters

#include <stdio.h>

int main()
{
    float hw, project, lab, midterm1, midterm2, Final;
    char startOver;
    int counter;
    float finalScore;
    char letterGrade;

    do
    {
        // HW average
        counter = 0;
        printf("Enter the hw average score: ");
        scanf("%f", &hw);
        do
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &hw);
            if (hw < 0 || hw > 100){
                counter++;
            }
        }
        while ((hw < 0 || hw > 100) && counter < 2);

        if (counter == 2)
            {
                printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
                scanf(" %c", &startOver);
                if (startOver != 'Y' && startOver != 'y')
                    break;
                continue;
            }


        // Project average
        counter = 0;
        printf("\nEnter the project average score: ");
        scanf("%f", &project);

        do
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &project);
            if (project < 0 || project > 100){
                counter++;
            }
        }
        while ((project < 0 || project > 100) && counter < 2);

        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }


        // Lab average
        counter = 0;
        printf("\nEnter lab average score: ");
        scanf("%f", &lab);
        do
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &lab);
            if (lab < 0 || lab > 100){
                counter++;
            }
        }
        while ((lab < 0 || lab > 100) && counter < 2);

        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }

        // Midterm1
        counter = 0;
        printf("\nEnter midterm1, midterm2, and final: ");
        scanf("%f %f %f", &midterm1, &midterm2, &Final);
        do
        {
            printf("Invalid midterm1 score. Try again: ");
            scanf("%f", &midterm1);
            if (midterm1 < 0 || midterm1 > 100){
                counter++;
            }
        }
        while ((midterm1 < 0 || midterm1 > 100) && counter < 2);

        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }

        // midterm2
        counter = 0;
        do
        {
            printf("Invalid midterm2 score. Try again: ");
            scanf("%f", &midterm2);
            if (midterm2 < 0 || midterm2 > 100){
                counter++;
            }
        }
        while ((midterm2 < 0 || midterm2 > 100) && counter < 2);

        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }

        // Final
        counter = 0;
        do
        {
            printf("Invalid final score. Try again: ");
            scanf("%f", &Final);
            if (Final < 0 || Final > 100){
                counter++;
            }
        }
        while ((Final < 0 || Final > 100) && counter < 2);

        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }

        // Calculate the final score
        finalScore = (hw * 0.2) + (project * 0.2) + (lab * 0.05) + ((midterm1 + midterm2 + Final) / 3) * 0.55;

        // Determine letter grade
        switch ((int)finalScore / 10)
        {
            case 10:
            case 9:
                letterGrade = 'A';
                break;
            case 8:
                letterGrade = 'B';
                break;
            case 7:
                letterGrade = 'C';
                break;
            case 6:
                letterGrade = 'D';
                break;
            default:
                letterGrade = 'F';
        }
        printf("Here are all your average scores:\n");
        printf("HW \t\t: %.2f\n",hw);
        printf("PROJECTS \t: %.2f\n",project);
        printf("LABS\t\t: %.2f\n",lab);
        printf("MIDTERM1\t: %.2f\n",midterm1);
        printf("MIDTERM2\t: %.2f\n",midterm2);
        printf("FINAL\t\t: %.2f\n",Final);

        printf("-------------------------------\n");
        printf("OVERALL AVERAGE: %.2f\n", finalScore);
        printf("(%.2f*.2 + %.2f*.2 + %.2f*.05 + (%.2f+%.2f+%.2f)*.55/3 is %.2f)\n",hw,project,lab,midterm1,midterm2,Final,finalScore);
        printf("-------------------------------\n");
        printf("\t\t\tFINAL LETTER GRADE: %c\n", letterGrade);

        // Start Over?
        printf("Would you like to start over (Y/N): ");
        scanf(" %c", &startOver);


    } while (startOver == 'Y' || startOver == 'y');

    //Make sure answer is No
    counter = 0;
    while (startOver != 'N' && startOver != 'n' && counter < 2)
    {
        counter++;
        printf("Invalid character. Try again: ");
        scanf(" %c", &startOver);
    }
    if (counter == 2)
    {
        printf("\t\t\tProgram terminated!\n");
    }


    printf("\t\t\tGoodbye!\n");

    return 0;
}

