//user deined dataype which is used to store dissimiliar type of data items 
// syntax -> struct structurename{
//                  datatype 1;
//                  datatype 2;
//                  };    


#include<stdio.h>
struct student{
    char name[10];
    int roll;v
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