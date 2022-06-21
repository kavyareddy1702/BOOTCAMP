#include<stdio.h>
struct student{
    char name[10];
    int id;
};
int main(){
    struct student stu, *ptr;
    ptr = &stu;
    printf("Enter student details : \n");
    printf("Enter student name : ");
    scanf("%s",stu.name);
    printf("Enter student id : ");
    scanf("%d",&stu.id);
    printf("\nStudent details are : \n");
    printf("Student name is : %s\n",(*ptr).name);
    printf("Student id is : %d\n",(*ptr).id);
    return 0;
}