#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter your Name: ");
    gets(name);
    int value = strcmp(name, "Manav");

    // OR if(strcmp(name,"Manav"))
    if (value == 0)
    {
        printf("You are Player 1\n");
    }
    else
    {
        printf("Your are not a Player");
    }
    return 0;
}