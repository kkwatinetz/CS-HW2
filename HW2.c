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

    do
    {
        // HW average
        counter = 0;
        printf("Enter the hw average score: ");
        scanf("%f", &hw);
        while ((hw < 0 || hw > 100) && counter < 2)
        {
            counter++;
            printf("Invalid score. Try again: ");
            scanf("%f", &hw);
        }
        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
        }

        // Project average
        counter = 0;
        printf("Enter the project average score: ");
        scanf("%f", &project);
        while ((project < 0 || project > 100) && counter < 2)
        {
            counter++;
            printf("Invalid score. Try again: ");
            scanf("%f", &project);
        }
        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
        }

        // Lab average
        counter = 0;
        printf("Enter lab average score: ");
        scanf("%f", &lab);
        while ((lab < 0 || lab > 100) && counter < 2)
        {
            counter++;
            printf("Invalid score. Try again: ");
            scanf("%f", &lab);
        }
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
        printf("Enter midterm1, midterm2, and final: ");
        scanf("%f %f %f", &midterm1, &midterm2, &Final);
        while ((midterm1 < 0 || midterm1 > 100) && counter < 2)
        {
            counter++;
            printf("Invalid midterm1 score. Try again: ");
            scanf("%f", &midterm1);
        }
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
        while ((midterm2 < 0 || midterm2 > 100) && counter < 2)
        {
            counter++;
            printf("Invalid midterm2 score. Try again: ");
            scanf("%f", &midterm2);
        }
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
        while ((Final < 0 || Final > 100) && counter < 2)
        {
            counter++;
            printf("Invalid final score. Try again: ");
            scanf("%f", &Final);
        }
        if (counter == 2)
        {
            printf("I'm sorry... You tried too many times.\nWould you like to start over (Y/N): ");
            scanf(" %c", &startOver);
            if (startOver != 'Y' && startOver != 'y')
                break;
            continue;
        }


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


