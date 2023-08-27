#include<stdio.h>
int main () {
    int number, ans;
    printf("Enter a number ");
    scanf("%i", &number);
    ans = number % 2;  // we need to use the remainder and not the divider
    if (ans ==1 )
    {
        printf("The number is odd");
    }
    else {
        printf("The number is even");
    }
    return 0;
}