    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

int main(void)
{
    int grade;
    char gradeletter;
    float average;
    char sentinel;
    int counter = 1;

    printf("%s", "Input the grade: ");
    scanf("%d", &grade);
    average = grade;

    while(true)
    {
        printf("%s", "Input another grade? (y/n) ");
        scanf(" %c", &sentinel);
        if(sentinel == 'n')
        {
            break;
        }
        printf("%s", "Input grade: ");
        scanf("%d", &grade);
        counter++;
        average = average + grade;
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