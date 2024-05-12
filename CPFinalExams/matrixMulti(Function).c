#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
#define MAX 100
void input(int mat[MAX][MAX], int rows, int col)
{
    int i, j;
    printf("Enter elements of Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void matrixMultiply(int a[MAX][MAX], int b[MAX][MAX], int product[MAX][MAX], int A_rows, int B_col, int brows)
{
    int i, j, k, sum = 0;
    for (i = 0; i < A_rows; i++)
    {
        for (j = 0; j < B_col; j++)
        {
            for (k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
}

void display(int product[MAX][MAX], int A_rows, int B_col)
{
    int i, j;
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
void main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX], A_rows, A_col, B_rows, B_col;
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
        input(a, A_rows, A_col);
        input(b, B_rows, B_col);
        matrixMultiply(a, b, product, A_rows, B_col, B_rows);
        display(product, A_rows, B_col);
    }
}
