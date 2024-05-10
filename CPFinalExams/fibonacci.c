#include <stdio.h>
#include <conio.h>
void main()
{
    int i, limit, n1 = 0, n2 = 1, nextNum;
    printf("Enter the limit for fibonacci series: ");
    scanf("%d", &limit);
    printf("The fibonacci series is :\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d \t", n1);
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }
}