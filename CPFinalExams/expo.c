#include <stdio.h>
#include <conio.h>
int expo(int x, int n)
{
    int pow;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        pow = x * expo(x, n - 1);
    }
}
void main()
{
    int x, n; // to find y=x^n
    printf("Enter the value of x and n \n");
    scanf("%d%d", &x, &n);
    printf("The value of y = %d", expo(x, n));
}