#include <stdio.h>

int main(void)
{

    int num1, num2;

    printf("%s", "Enter the first integer:");
    scanf("%d", &num1);
    printf("%s", "Enter the second integer:");
    scanf("%d", &num2);

    int result = num1 * num2;

    printf("The area of the rectangle is: %d", result);

    return 0;
}
