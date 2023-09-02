#include <stdio.h>
int main()
{
    int ready, slices = 17;
    int people = 2;
    /*to solce this add .0 to a constant
    or type convert it explicitly */
    double halfSlices = (double)slices / people; // result is a integer
    // it is an unary operator
    printf("halfSlices: %f\n", halfSlices);
    printf("Do you wanna attempt a quiz on it?\n 1) - Yes \n 2)- No\n");
    scanf("%i", &ready);
    // trivia ( problem)
    // solve it or dont run it
    if (ready == 1)
    {
        double c = 25 / 2 * 2;
        double d = 25 / 2 * 2.0; // it is not neccessay all the values will be identifed in double only 2.0 is double
        printf("c: %f\n", c);
        printf("c: %f", d);
        return c, d;
    }
    else
    {
        printf("Be prepared next time");
    }

    return 0;
}
