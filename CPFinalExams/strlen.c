#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int l;
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    l = strlen(str);
    printf("The size of %s is: %d", str, l);
}