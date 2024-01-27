#include <stdio.h>
int factorial();
void main()
{
int a,fact;
printf("Enter a number");
scanf("%d",&a);
fact=factorial(a);
printf("The factorial of %d is %d",a,fact);
}
int factorial(int a)
{
int i,number=1;
for(i=1;i<=a;i++)
{
number=number*i;
}
return(number);
}