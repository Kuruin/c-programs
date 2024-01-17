#include <stdio.h>
int main()
{
    int level;
    printf("Enter a number from 0-5\n");
    scanf("%d", &level);
    switch (level)
    {
    case 0:
        printf("Wrong choice");
        break;

    case 1:
        printf("Right choice");
        break;

    default:
        printf("SYNTAX ISSUE");
        break;
    }
    return 0;
}