#include <stdio.h>
#include <conio.h>
void main()
{
    int n, sum = 0, i;
    printf("Enter the limit:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first n natural numbers is: %d", sum);
}