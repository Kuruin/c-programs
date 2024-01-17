#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a;
printf("Enter a number");
scanf("%d",&a);
if(a%2==1)
{ 
printf("The number %d is odd\n",a);
}
else 
{
printf("The number %d is even",a);
}

    return 0;
}