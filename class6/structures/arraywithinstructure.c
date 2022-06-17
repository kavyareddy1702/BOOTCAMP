#include<stdio.h>
struct student{
    char name[10];
    int roll;
    struct birth
    {
        int day; 
        char month[10];
        int year;    
    }dob;
    int marks[4];    
};


int main()
{
    struct student stu[3];
    for(int i=1; i<=3; i++)
    {
    printf("\nEnter student name : ");
    scanf("%s",stu[i].name);
    printf("Enter student roll no. : ");
    scanf("%d",&stu[i].roll);

    printf("Enter birth details\n");
    printf("Enter birthdate : ");
    scanf("%d",&stu[i].dob.day);
    printf("Enter month : ");
    scanf("%s",stu[i].dob.month);
    printf("Enter year: ");
    scanf("%d",&stu[i].dob.year);
    
    printf("\nEnter Student marks:\n");
    printf("Enter marks in 4 subjects :");
    for(int j=1; j<=4; j++){
        scanf("%d",&stu[i].marks[j]);
    }
    }

    printf("\nStudent Details\n");

    for(int i=1; i<=3; i++){
    printf("\nStudent name : %s\n", stu[i].name);
    printf("Student roll number : %d\n", stu[i].roll);
    printf("Student birthday : %d %s %d\n",stu[i].dob.day,stu[i].dob.month,stu[i].dob.year);
    printf("Students marks : \n");

    for(int j=1; j<=4; j++)
    {
        printf("%d\n",stu[i].marks[j]);
    }
    printf("\n");
    }

    return 0;
}
