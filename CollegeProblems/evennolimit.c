#include<stdio.h>
#include<conio.h>

int main()
{
    clrscr();
    int i=0,n;
    printf("Enter the limit for even numbers");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    if(i%2==0)
    {
    printf("%d \n",i);
    }
    }
    return 0;
}