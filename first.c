#include <stdio.h>
int main()
{
    float area, radius;

    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("\nArea of circle is %f", area);
    return 0;
}