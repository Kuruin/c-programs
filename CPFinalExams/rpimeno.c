#include <stdio.h>
// #include <conio.h>
void main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("IT IS NEITHER PRIME NOR COMPOSITE");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d is  a prime number ", n);
        }
        else
        {
            printf("%d is not a prime number ", n);
        }
    }
}