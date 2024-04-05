#include<stdio.h>
#include<conio.h>
struct city
{
  float population;
  int location;
  char name[100];
};
void main ()
{
struct city cities;    
printf("Enter a City name: ");
gets(cities.name);
// or                                 // these are for string input with spaces
scanf("%[^\n]%*c", str);
scanf("%s",cities.name);
printf("%s",cities.name);
}