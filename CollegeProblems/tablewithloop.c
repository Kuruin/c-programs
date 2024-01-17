#include<stdio.h>
#include<conio.h>

int main()
{
    clrscr();
    int i,num,table;
    printf("Enter a number");
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
    printf("%d *%d = %d\n",num,i,table=num*i);
    i++;
    }
    return 0;
}