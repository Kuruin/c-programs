#include <stdio.h>
int main()
{
    // boolean is something wich true or false
    _Bool isEarthFlat = 1;
    printf("Is the earth flat ?\n 1 for true \n 0 for false \n", isEarthFlat);
    scanf("%i", &isEarthFlat);
    if (isEarthFlat == 1)
    {
        printf("So the earth is flat ha.... ");
    }
    else
    {
        printf("Nice one... earth is not flat");
    }

    return 0;
}
