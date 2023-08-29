#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, isum, idiff;
    float c, d, fsum, fdiff;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    isum = a + b;
    idiff = a - b;
    fsum = c + d;
    fdiff = c - d;
    printf("%i %i\n", isum, idiff);
    printf("%.1f %.1f", fsum, fdiff); // remember to round it up to 1 deciaml place .1f is imp

    return 0;
}
