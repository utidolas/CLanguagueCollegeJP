    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

int main(void)
{
    int number;
    int largest = 0;

    for (unsigned int i = 0; i < 10; i++)
    {
        printf("%s", "Input an integer: ");
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("The largest number is %d", largest);

    return 0;
}







