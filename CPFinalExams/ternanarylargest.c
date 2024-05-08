#include <stdio.h>

void main()
{
    int n1,n2,n3,big;
    printf("Enter a number:");
    scanf("%d%d%d",&n1,&n2,&n3);
    big=(n1>n2&&n1>n3)?(n1) : ((n2>n3) ?(n2):(n3) );
    printf("%d is greater ",big);
    
    
}