#include <stdio.h>
#include <conio.h>
void main()
{
    int n, temp = 0, sum = 0,rem;
    printf("Enter a number "); // 121
    scanf("%d", &n);
    temp = n; // temp==121
    while (n != 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("%d is a plaindrome number", temp);
    }
    else
    {
        printf("%d is not a plaindrome number", temp);
    }
}