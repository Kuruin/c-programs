#include <stdio.h>
// #include<conio.h>
struct student
{
    int roll_no;
    float marks;
    char name[100];
} s[10];

void main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Student %d \n", i);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter Name: ");
        scanf("%s", &s[i].name);
        printf("\n");
    }

    printf("ROLLNO\tMARKS\tNAME\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t%.2f\t%s", s[i].roll_no, s[i].marks, s[i].name);
        printf("\n");
    }
}