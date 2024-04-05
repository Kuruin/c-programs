#include <stdio.h>
#include<strings.h>

int main()
{
    char name[20];
    printf("What is your name?\n");
    scanf("%10s", name);
    printf("your name is: %s and you have %lu characters ", name,strlen(name));
    return 0;
}
