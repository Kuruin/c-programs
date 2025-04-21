#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of process ");
    scanf("%d", &n);
    int bt[n], tat[n], p[n], wt[n];
    printf("Enter burst times ");
    for (i = 0; i < n; i++)
    {
        printf("P %d", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (bt[i] > bt[j])
            {
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    wt[0] = 0;
    // Calculate waiting times
    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j]; // Add burst times of all previous processes
    }

    // Calculate turnaround times
    for (i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    // Display the results
    printf("\nProcess\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }
    return 0;
}