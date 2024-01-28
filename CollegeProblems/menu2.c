#include <stdio.h>
void main()
{
    int num;
    printf("Choose a menu:\n");
    printf("1. Get multiplication table of the number\n");
    printf("2. Get factorial of a number\n");
    printf("3. Get Fibonacci series upto a given limit\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        int n1, limit, table;
        printf("Enter a number for table and the limit upto the table is required \n");
        scanf("%d %d", &n1, &limit);
        for (int i = 1; i <= limit; i++)
        {
            printf("The multiplication of %d is:\n", n1);
            printf("%d * %d = %d\n", n1, i, table = n1 * i);
        };
        break;
    case 2:
        int num2, fact1 = 1;
        printf("Enter a number\n");
        scanf("%d", &num2);
        for (int i = 1; i <= num2; i++)
        {
            fact1 = fact1 * i;
        }
        printf("The factorial is:%d", fact1);
        ;
        break;
    case 3:
        int num3, nextNum, n4 = 0, n5 = 1;
        printf("Enter the limit for fibonacci series \n");
        scanf("%d", &num3);
        printf("The fibonacci series is:\n");
        for (int i = 1; i <= num3; ++i)
        {
            printf("%d \t", n4);
            nextNum = n4 + n5;
            n4 = n5;
            n5 = nextNum;
        };
        break;
    default:
        printf("Choose a valid menu");
        break;
    }
}
