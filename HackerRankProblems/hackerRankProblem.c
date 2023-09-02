#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char character, sen[100], longsen[100];

    scanf("%c", &character);
    scanf("%s", sen);
    scanf("\n"); // this is imp idk why yet... maybe to tell a new line is starting
    
    /*Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character
    \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); 
    before the last statement.*/
   
    scanf("%[^\n]%*c", longsen); // or fgets(longsen, 100, stdin);

    /*so the ^\n reds until new line is there and %*c will read the next cahracter
    and when ^5 is there it will take input as far as when 5 is not entered
    */
   
    printf("%c\n", character);
    printf("%s\n", sen);
    printf("%s\n", longsen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
