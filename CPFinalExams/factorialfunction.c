#include <stdio.h>
#include <conio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return (fact);
}
void main()
{
    int n, fact;
    printf("Enter a number ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is %d", n, fact);
}