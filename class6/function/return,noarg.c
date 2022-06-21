#include<stdio.h>
int add();
int add()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    c = a+b;
    return c;
}
int main(){
    int res;
    res = add();
    printf("Sum : %d\n",res);
    return 0;
}