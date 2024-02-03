#include <stdio.h>
int main()
{
    int i, j, rows, mid;
    printf("Enter the no of rows: \n");
    scanf("%d", &rows);
    mid = rows / 2;
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j <= rows; j++)
        {
            if (j == 0 || j == rows - 1 || (i <= mid && (i == j || j == (rows - 1) - i)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}