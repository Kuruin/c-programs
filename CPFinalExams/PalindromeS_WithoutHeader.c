#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_Palindrome(char str[])
{
   int len = strlen(str), i;
   int middle = len / 2;
   for (i = 0; i < middle; i++)
   {
      if (str[i] != str[len - i - 1])
      {
         return false;
      }
   }

   return true;
}
void main()
{
   char str[100];
   printf("Enter a string:"); // madam
   scanf("%s", &str);

   if (is_Palindrome(str))
   {
      printf("\n%s-Is a palindrome", str);
   }
   else
   {
      printf("\n%s-Is not a palindrome", str);
   }
}