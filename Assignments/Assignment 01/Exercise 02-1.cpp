#include <stdio.h>

int main(void)
{

    int a, b, c, d, e;
    printf("%s", "Enter 5 integers separated by space:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    float result = (float)a / b + (c + d) / (float)e;
    printf(" %d     %d + %d\n--- + ------- = %f\n %d       %d", a, c, d, result, b, e);

    return 0;
}
