#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("-----Relational Operators-----\n");
    printf("Select operator : ");
    printf("1. Less than operator a<b\n");
    printf("2. Greater than operator a>b\n");
    printf("3. Comparison operator a==b \n");
    printf("4. Less than equDivision\n");
    printf("5. Modulus\n");
    scanf("%d",&n);
    printf("Enter two numbers : \n");
    printf("Enter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    switch(n){
        case 1:
        printf("Sum of two numbers is : %d",n1+n2);
        break;

        case 2:
        printf("Subtraction of two numbers is : %d",n1-n2);
        break;

        case 3:
        printf("Multiplication of two numbers is : %d",n1*n2);
        break;

        case 4:
        printf("Division of two numbers is : %d",n1/n2);
        break;

        case 5:
        printf("Modulus of two numbers is : %d",n1%n2);
        break;
    }
    return 0;
}