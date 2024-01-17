#include<stdio.h>
#include<conio.h>

int main()
{
    clrscr();
    float r,area,len,width,perimeter;
    printf("Enter the radius of a  circle\n");
    scanf("%f",&r);
    printf("Enter length of a rectangle\n");
    scanf("%f",&len);
    printf("Enter width of a rectangle\n");
    scanf("%f",&width);
    area=3.14*r*r;
    printf("The area of a circle is: %f\n",area);
    perimeter=2.0*(len+width);
    printf("The perimeter of rectangle is: %f",perimeter);
    getch();
    return 0;
}