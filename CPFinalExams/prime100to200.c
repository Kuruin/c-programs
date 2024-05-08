#include <stdio.h>
// #include <conio.h>
void main()
{
    int n, i, flag;
    for (n = 100; n <= 200; n++)
    {
        flag = 0;
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
            printf("%d \t", n);
        }
    }
}