//wap to calculate gross salary of an employee
#include<stdio.h>
int main(){
    int b, oa, gross,hike;
    printf("\nSalary of an employee : \n");
    printf("\nEnter basic : ");
    scanf("%d",&b);
    printf("\nEnter other allowances : ");
    scanf("%d",&oa);
    printf("\nEnter hike percentage : \n");
    scanf("%d",&hike);
    printf("\nGross salary of the employee is : %d ", b+(b*hike/100)+oa);
    return 0;
}

//construct relational operators