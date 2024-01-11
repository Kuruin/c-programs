#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp;
    bool IsPizzaHealthy;
    printf("Do you think pizza is healthy or not \n 1 for yes \n 0 for no \n");
    scanf("%d", &temp);
    IsPizzaHealthy = temp;
    if (IsPizzaHealthy) // ture as long as not its zero
    {
        printf("HAHAHA.....No its not\n ");
    }
    return 0;
}