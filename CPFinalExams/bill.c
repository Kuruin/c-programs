#include <stdio.h>
#include <conio.h>
void main()
{
    int unit, total;
    printf("Enter electricity unit: ");
    scanf("%d", &unit);
    if (unit > 0 && unit <= 50)
    {
        total = unit * 0.50;
    }
    else if (unit > 50 && unit <= 100)
    {
        total = unit * 0.75;
    }
    else if (unit > 100 && unit <= 200)
    {
        total = unit * 1.20;
    }
    else
    {
        total = unit * 1.50;
    }
    printf("Total Bill is: %d", total);
}