// Online C compiler to run C program online
#include <stdio.h>
struct student 
{
    int roll;
    float marks;
    char name[50];
}s[50];

int main() {
    int i,n;
    printf("Enter the no of students record: ");
    scanf("%d",&n);
    printf("Enter students record:");
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("Enter Name: ");
        scanf("%s",&s[i].name);
        printf("Enter Roll No: ");
        scanf("%d",&s[i].roll);
        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("\n");
    printf("Students record:");
    for(i=0;i<n;i++)
    {
    printf("\n");
    printf("Name: %s\n",s[i].name);
    printf("Roll No: %d\n",s[i].roll);
    printf("Marks: %f\n",s[i].marks);
    
    }
    return 0;
}