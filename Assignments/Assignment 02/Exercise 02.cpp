    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

int main(void)
{
    int grade;
    char gradeletter;
    float average = 0;
    char sentinel;
    int counter = 0;

    while(sentinel != 'n')
    {
        printf("%s", "Input grade: ");
        scanf("%d", &grade);

        counter++;
        average = average + grade;

        printf("%s", "Input another grade? (y/n) ");
        scanf(" %c", &sentinel);

    }
    average = (float)average/counter;

    if(average >= 90)
    {
        gradeletter = 'A';
    }
    else if(average >= 80)
    {
        gradeletter = 'B';
    }
    else if(average >= 70)
    {
        gradeletter = 'C';
    }
    else if(average >= 60)
    {
        gradeletter = 'D';
    }
    else
    {
        gradeletter = 'F';
    }

    printf("The average is %.2f (%c)", average, gradeletter);
    return 0;
}


