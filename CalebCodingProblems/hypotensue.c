/*Create a program that takes two doubles as inputs, calculates the hypotensue of a right angled triangle and output it*/

#include <stdio.h>
#include <math.h> // this is very important
int main()
{

    double num1, num2, result, SquareRoot; // intializing the variables
    printf("This program will calculate the hypotensue of a right angle triangle in floating point\n");
    // Get the first number
    printf("Enter the first number(float): \n ");
    // lf for double
    scanf("%lf", &num1);
    printf("Enter the second number(float): \n ");
    scanf("%lf", &num2);
    result = (num1 * num1) + (num2 * num2); // pythagoras theorem
    SquareRoot = sqrt(result);
    printf("The hypotensue of the right angle triangle is: %f ", SquareRoot);
}