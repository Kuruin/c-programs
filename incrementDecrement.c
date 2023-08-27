#include <stdio.h>
int main()
{
    int pizzaToEat = 100;
    int pizza = 100;
    int output = ++pizzaToEat; // pre increment same for decrement 
    int output1 = pizza ++; // post increment same for decrement 
    printf("%i \n", output);
    printf("%i", output1);
    return 0;
}