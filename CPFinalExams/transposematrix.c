#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100][100], row, col, i, j;
    printf("Enter row and col of the matrix:\n");
    scanf("%d%d", &row, &col);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of the matix is: \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }
}