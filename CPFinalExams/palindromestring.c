#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[100];
    int len, i, flag = 0;
    printf("Enter a string: "); // madam
    gets(str);
    len = strlen(str); // 5
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}