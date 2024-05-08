#include<stdio.h>
#include<conio.h>
void main() {
    int n,table,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,table=n*i);
    }
}