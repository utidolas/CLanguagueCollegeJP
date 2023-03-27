#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char*argv[])
{
    unsigned int counter = 1;
    unsigned int number;
    unsigned int largest = 0;

    while(counter <= 10)
    {
        printf("%s","Enter a number: ");
        scanf("%d", &number);

        if(number > largest)
        {
            largest = number;
        }

        counter++;
    }

    printf("The largest number is: %u", largest);
}


