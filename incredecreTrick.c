#include<stdio.h>
int main (){
    // image wanting to increment/decrement by a certain fixed value
    int pizza = 100;
    int cookie = 100;
    pizza = pizza + 100; // long hand method
    cookie %= 8; // short hand method use / , - or %
    printf("%i \n", pizza);
    printf("%i", cookie);
    return 0;

}