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
    int n, fact, r;
    printf("Enter value for n and r ");
    scanf("%d%d", &n, &r);
    fact = factorial(n) / (factorial(r) * factorial(n - r));
    printf("The NCR is %d", fact);
}