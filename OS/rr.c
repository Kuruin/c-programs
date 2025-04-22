#include <stdio.h>

int main()
{
    int n, i, tq, time = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], rt[n], wt[n], tat[n];
    printf("Enter burst times:\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i]; // Initialize remaining time
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    int done;
    do
    {
        done = 1;
        for (i = 0; i < n; i++)
        {
            if (rt[i] > 0)
            {
                done = 0;
                if (rt[i] > tq)
                {
                    time += tq;
                    rt[i] -= tq;
                }
                else
                {
                    time += rt[i];
                    wt[i] = time - bt[i];
                    rt[i] = 0;
                }
            }
        }
    } while (!done);

    // Calculate turnaround times
    for (i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];

    // Display output
    printf("\nProcess\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    return 0;
}
