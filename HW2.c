//unit2.hw
//Group members: Katie Kwatinetz, Lanaiya Walters

#include <stdio.h>

int main()
{
    float hw, project, lab, midterm1, midterm2, Final;
    char startOver;
    int counter;
    float finalScore;
    char letterGrade;
    char minusAdd;

    do
    {
        // HW average
        counter = 0;
        printf("Enter the hw average score: ");
        scanf("%f", &hw);
        while ((hw < 0 || hw > 100) && counter < 2)
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &hw);
            if (hw < 0 || hw > 100){
                counter++;
            }
        }
        if (counter == 2)
            {
                printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
                scanf(" %c", &startOver);
                if (startOver != 'Y' && startOver != 'y')
                    goto bye;
                    break;
                continue;
            }


        // Project average
        counter = 0;
        printf("\nEnter the project average score: ");
        scanf("%f", &project);

        while ((project < 0 || project > 100) && counter < 2)
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &project);
            if (project < 0 || project > 100){
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                goto bye;
                break;
            continue;
        }


        // Lab average
        counter = 0;
        printf("\nEnter lab average score: ");
        scanf("%f", &lab);
        while ((lab < 0 || lab > 100) && counter < 2)
        {
            printf("Invalid score. Try again: ");
            scanf("%f", &lab);
            if (lab < 0 || lab > 100){
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                goto bye;
                break;
            continue;
        }

        // Midterm1
        counter = 0;
        printf("\nEnter midterm1, midterm2, and final: ");
        scanf("%f %f %f", &midterm1, &midterm2, &Final);
        while ((midterm1 < 0 || midterm1 > 100) && counter < 2)
        {
            printf("Invalid midterm1 score. Try again: ");
            scanf("%f", &midterm1);
            if (midterm1 < 0 || midterm1 > 100){
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                goto bye;
                break;
            continue;
        }

        // midterm2
        counter = 0;
        while ((midterm2 < 0 || midterm2 > 100) && counter < 2)
        {
            printf("Invalid midterm2 score. Try again: ");
            scanf("%f", &midterm2);
            if (midterm2 < 0 || midterm2 > 100){
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                goto bye;
                break;
            continue;
        }

        // Final
        counter = 0;
        while ((Final < 0 || Final > 100) && counter < 2)
        {
            printf("Invalid final score. Try again: ");
            scanf("%f", &Final);
            if (Final < 0 || Final > 100){
                counter++;
            }
        }
        if (counter == 2)
        {
            printf("\nI'm sorry... You tried too many times.\n\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                goto bye;
                break;
            continue;
        }

        // Calculate the final score
        finalScore = (hw * 0.2) + (project * 0.2) + (lab * 0.05) + ((midterm1 + midterm2 + Final) / 3) * 0.55;

        // Determine letter grade
            // Determine letter grade
        if (finalScore >= 94)
        {
            letterGrade = 'A';
        }
        else if (finalScore >= 90)
        {
            letterGrade = 'A';
            minusAdd = '-';
        }
        else if (finalScore >= 87)
        {
            letterGrade = 'B';
            minusAdd = '+';
        }
        else if (finalScore >= 84)
        {
            letterGrade = 'B';
        }
        else if (finalScore >= 80)
        {
            letterGrade = 'B';
            minusAdd = '-';
        }
        else if (finalScore >= 77)
        {
            letterGrade = 'C';
            minusAdd = '+';
        }
        else if (finalScore >= 74)
        {
            letterGrade = 'C';
        }
        else if (finalScore >= 70)
        {
            letterGrade = 'C';
            minusAdd = '-';
        }
        else if (finalScore >= 67)
        {
            letterGrade = 'D';
            minusAdd = '+';
        }
        else if (finalScore >= 64)
        {
            letterGrade = 'D';
        }
        else if (finalScore >= 61)
        {
            letterGrade = 'D';
            minusAdd = '-';
        }
        else
        {
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
        printf("\t\t\tFINAL LETTER GRADE: %c%c \n", letterGrade, minusAdd);

        // Start Over?
        printf("Would you like to start over (Y/N): ");
        scanf(" %c", &startOver);

        bye:
        counter = 0;
        while (startOver != 'Y' && startOver != 'y' && startOver != 'N' && startOver != 'n')
        {
            printf("Invalid character. Try again: ");
            scanf(" %c", &startOver);

            if (startOver != 'N' && startOver != 'n' && startOver != 'Y' && startOver != 'y')
            {
                counter++;
            }
            if (counter == 2)
            {
                printf("\n\t\t\tProgram terminated!\n");
                break;
            }
        }


    }
    while (startOver == 'Y' || startOver == 'y');

    if (startOver == 'N' || startOver == 'n'){
        printf("\n\t\t\tGoodbye!\n");
    }

    return 0;
}
