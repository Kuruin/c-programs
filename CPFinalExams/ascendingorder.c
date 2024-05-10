#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], n, i, j, temp = 0;
    printf("How many elements of the array: ");
    scanf("%d", &n);
    printf("Enter elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The sorted elements are:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}