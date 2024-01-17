// doctors office
// 1.add patient
// 2.view a patient
// 3.search patients
// 4.exit
#include <stdio.h>
void main()
{
    int menu;
    printf("Select menu from the following: \n");
    printf("1. Add patient\n");
    printf("2. View a patient\n");
    printf("3. Search for a patient\n");
    printf("4. Exit\n");
    scanf("%d", &menu);
    if (menu == 1)
    {
        printf(" Adding a patient\n");
    }
    else if(menu==2)
    {
        printf("Viewing a patient\n");
    }
    else if (menu==3)
    {
       printf("Searching for a patient\n"); 
    }
    else if (menu==4)
    {
        printf("Exiting from the menu...\n");
    }
    else{
    printf("Invalid input!\nYou are now out of the menu");
    }
    return 0;
    }