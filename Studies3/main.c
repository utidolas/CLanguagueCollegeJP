#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int sum = 0;
    int squares = 0;
    int cubes = 0;
    int limit;

    printf("%s", "Enter the range of the sum: ");
    scanf("%d", &limit);

    for(int number = 1; number <= limit; number++)
    {
        sum += number;
        squares += pow(number, 2);
        cubes += pow(number, 3);
    }
    puts("");
    printf("The sum of the numbers between 1 and %d is: %d\n", limit, sum);
    printf("The sum of the squares numbers between 1 and %d is: %d\n", limit, squares);
    printf("The sum of the cubes numbers between 1 and %d is: %d\n", limit, cubes);

    return 0;
}







