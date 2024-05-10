#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a[5], max;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d is the largest", max);
}