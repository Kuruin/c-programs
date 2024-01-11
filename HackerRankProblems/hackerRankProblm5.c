#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,n;
    scanf("%d\n%d", &a, &b);
    for (int i =0; i<9; i++)
    {
        int n=i;
        if (n==1)
        {
            printf("One");
        }
    if (n==2)
        {
            printf("Two");
        }if (n==3)
        {
            printf("Three");
        }if (n==4)
        {
            printf("Four");
        }if (n==5)
        {
            printf("Five");
        }if (n==6)
        {
            printf("Six");
        }
        if (n==7)
        {
            printf("Seven");
        }
        if (n==8)
        {
            printf("Eight");
        }if (n==9)
        {
            printf("Nine");
        }
    }
   if (n>9){
   if (a%2==0)
   {
    printf("It is a even number");
    }
   else{
    printf("It is a odd number");
   }
   }
    
  	// Complete the code.

    return 0;
}

