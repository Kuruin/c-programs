#include <stdio.h>

struct Item
{
    int weight;
    int value;
};

void fractional_knapsack(struct Item item[], int n, int capacity)
{
    float totalValue = 0.0;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            float r1 = (float)item[i].value / item[i].weight;
            float r2 = (float)item[j].value / item[j].weight;

            if (r1 < r2)
            {
                struct Item temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (capacity >= item[i].weight)
        {
            capacity -= item[i].weight;
            totalValue += item[i].value;
        }
        else
        {
            totalValue += (float)item[i].value * capacity / item[i].weight;
            break;
        }
    }
    printf("Total value of knapsack is %.2f", totalValue);
}

int main()
{
    struct Item item[] = {{10, 60}, {20, 100}, {30, 120}};
    int n = 3;
    int capacity = 50;
    fractional_knapsack(item, n, capacity);
    return 0;
}