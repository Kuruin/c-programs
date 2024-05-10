#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100][100], b[100][100], row, col, i, j, n, flag = 0;
    printf("Enter row and coloumn of the matrix:\n");
    scanf("%d%d", &row, &col);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the matrix are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
}