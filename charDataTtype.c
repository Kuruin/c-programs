#include<stdio.h>
int main () {
    // null character is /0
    // always use '' stings 
    /*Character set used for c is ASCII
    8 bits is 1 byte*/
    char myChar;
    printf("Enter a character\n");
    scanf("%c", &myChar);
    printf("%i\n", myChar);

    // printing char with integer
    int integer;
    printf("Pls enter a integer value from 0 - 127 ");
    scanf("%i", &integer);
    printf("%c\n", integer);
     
    // maths with ASCII
    char mathz = 'A' + '\t';
    printf("A + \\t = %c(%d)\n",mathz, mathz);
    return 0; 
}