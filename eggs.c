#include <stdio.h>
int main () {
    float eggs;
    printf("THe number of eggs are ");
    scanf("%f", &eggs);
    int  dozen = (int) eggs/12;
    printf("The eggs are %i", dozen);
    
    return 0;
}