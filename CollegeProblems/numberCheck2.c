#include <stdio.h>
void main()
{
    int choice;
    printf("Select a choice \n");
    printf("1.Armstrong Number\n");
    printf("2.Prime Number\n");
    printf("3.Perfect number\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int r, temp1, sum1 = 0, num1;
        printf("Enter a number ");
        scanf("%d", &num1);
        temp1 = num1;
        while (num1 > 0)
        {
            r = num1 % 10;
            sum1 = sum1 + (r * r * r);
            num1 = num1 / 10;
        }
        if (temp1 == sum1)
        {
            printf("%d is an Armstrong number\n", temp1);
        }
        else
        {
            printf("%d is not an Armstrong number\n", temp1);
        }
        break;
    case 2:
        int j, flag, num2;
        printf("Enter a number ");
        scanf("%d", &num2);
        for (j = 2; j < num2; j++)
        {
            if (num2 % j == 0)
                flag = 1;
        }
        if (flag == 1)
        {
            printf("%d is not a prime number\n", num2);
        }
        else
        {
            printf("%d is a prime number\n", num2);
        }
        break;

    case 3:
        int i, sum3 = 0, num3;
        printf("Enter a number ");
        scanf("%d", &num3);
        for (i = 1; i < num3; i++)
        {
            if (num3 % i == 0)
            {
                sum3 = sum3 + i;
            }
        }
        if (sum3 == num3)
        {
            printf("%d is a Perfect number\n", num3);
        }
        else
        {
            printf("%d is not a Perfect number\n", num3);
        }
        break;
    }
}