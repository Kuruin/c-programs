#include <stdio.h>
int main()
{
    int menu;
    printf("Select menu from the following: \n");
    printf("1. Add patient\n");
    printf("2. View a patient\n");
    printf("3. Search for a patient\n");
    printf("4. Exit\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Adding patient");
        break;
    case 2:
        printf("Viewing a patient ");
        break;

    case 3:
        printf("Searching for a suitable patient");
        break;

    case 4:
        printf("Exiting the menu..");
        break;
    
    default:
        printf("Wrong input!");
        break;
    }

    return 0;
}