#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Enter a valid number\nBye!");
    }
    else
    {
        prime(num);
        armstrong(num);
        perfect(num);
    }
}
int armstrong(int num)
{
    int i, r, temp, sum = 0;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("%d is an Armstrong number\n", temp);
    }
    else
    {
        printf("%d is not an Armstrong number\n", temp);
    }
    return 0;
}
int perfect(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        printf("%d is a Perfect number\n", num);
    }
    else
    {
        printf("%d is not a Perfect number\n", num);
    }
    return 0;
}
int prime(int num)
{
    int i, flag;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            flag = 1;
    }
    if (flag == 1)
    {
        printf("%d is not a prime number\n", num);
    }
    else
    {
        printf("%d is a prime number\n", num);
    }
    return 0;
}