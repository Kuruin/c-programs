#include <stdio.h>
int main()
{
    int a, b, sum, mult, div, sub;
    printf("Enter to two numbers \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    div = a / b;
    mult = a * b;
    sub = a - b;
    printf("The addition of two number is: %d \n", sum);
    printf("The division of two number is: %d \n", div);
    printf("The multiplication of two number is: %d \n", mult);
    printf("The subtraction of two number is: %d", sub);
    return 0;
}