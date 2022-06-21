#include<stdio.h>
void add();
void add(){
    int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    c=a+b;
    printf("Sum : %d\n",c);
}
int main()
{
    void (*ptr)();
    ptr = add;
    ptr();
    return 0;
}