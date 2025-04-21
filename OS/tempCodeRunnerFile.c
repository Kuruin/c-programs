#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of process");
    scanf("%d", n);
    int bt[n], tat[n], p[n], wt[n];

    printf("Enter burst times");
    for (i = 0; i < n; i++)
    {
        printf("P%d", i + 1);
    }
    return 0;
}