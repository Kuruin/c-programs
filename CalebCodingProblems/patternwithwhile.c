#include <stdio.h>
int main()
{
    int num, i = 0, k;
    printf("Enter a number: \n");
    scanf("%d", &num);
    while (i <= num)
    {
        k = i - 1;
        printf("%d ", i);
        i++;
        while (k >= 0)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}