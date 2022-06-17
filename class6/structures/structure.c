#include<stdio.h>
struct student{
    char name[10];
    int roll;
};
int main()
{
    struct student stu;
    printf("\nEnter student name : ");
    scanf("%s",stu.name);
    printf("Enter student roll no. : ");
    scanf("%d",&stu.roll);
    printf("\nStudent Details\n\n");
    printf("Student name : %s\n", stu.name);
    printf("Student roll number : %d\n", stu.roll);
    return 0;
}