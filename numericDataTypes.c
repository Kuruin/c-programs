#include <stdio.h>
int main()
{

    // int double float
    int dogs;
    // %f for floating point
    /*Double takes more memory than float */
    printf("%i %f %f\n", 1, 111.111111, 111111111111111111.11111111111111111111F); // Use double dont trust float for all
    scanf("%i", &dogs);
    printf("%i\n", dogs);

    /*Scientific notations */

    // we have 25000 cats so we use scientific notaions
    int cats = 2.5e4;
    printf("The number of cats are %i", cats);

    // lets take input from the user
    double sheep;
    scanf("%lf", &sheep);
    printf("%f", sheep);

    return 0;
}