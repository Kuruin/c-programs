#include <stdio.h>
#include <stdbool.h>
int main()
{
    // boolean is something wich true or false
    _Bool isEarthFlat = true; // use this method to define without header file

    printf("Is the earth flat ?\n 1 for true \n 0 for false \n", isEarthFlat);
    scanf("%i", &isEarthFlat);
    if (isEarthFlat == true)
    {
        printf("So the earth is flat ha.... ");
    }
    else
    {
        printf("Nice one... earth is not flat");
    }

    return 0;
}
