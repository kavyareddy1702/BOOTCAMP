// there are 4 ways to create a function
// function with no return no arg
// function with no return with arg
// function with return no arg
// function with return with arg

// steps to create a function
// function declaration -> return type function name ();
// function defination -> return type functionname()
// function call ->functionname();
#include<stdio.h>
void add();
void add(){
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);

    printf("Enter 2nd number : ");
    scanf("%d",&b);

    c = a+b;

    printf("Sum : %d\n",c);    
}
int main()
{
    add();
    return 0;
}