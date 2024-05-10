#include <stdio.h>
#include <conio.h>
int Rfactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        n = n * Rfactorial(n - 1);
    }
    return (n);
}
void main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("The factorial of %d is %d ", n, Rfactorial(n));
}