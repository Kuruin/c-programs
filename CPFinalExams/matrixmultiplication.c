#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int a[100][100], b[100][100], product[100][100], A_rows, A_col, B_rows, B_col, i, j, k, sum = 0;
    printf("Enter the row and col for Matrix A: \n");
    scanf("%d%d", &A_rows, &A_col);
    printf("Enter the row and col for Matrix B: \n");
    scanf("%d%d", &B_rows, &B_col);
    if (A_col != B_rows)
    {
        printf("Invalid Matrix! ");
    }
    else
    {
        printf("Enter elements of Matrix A: \n");
        for (i = 0; i < A_rows; i++)
        {
            for (j = 0; j < A_col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of Matrix B: \n");
        for (i = 0; i < B_rows; i++)
        {
            for (j = 0; j < B_col; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < A_rows; i++)
        {
            for (j = 0; j < B_col; j++)
            {
                for (k = 0; k < B_rows; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }
        printf("The resultant Matrix is: \n");
        for (i = 0; i < A_rows; i++)
        {
            for (j = 0; j < B_col; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
}