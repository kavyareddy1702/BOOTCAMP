//pointer is a special type of variable which is used to store the address of another variable 
// syntax -> *pointer name 
// pointer to pointer
//syntax -> **pointername (to store the address of another pointer)
// access specifiers -> %d,%u,%p,%x
#include<stdio.h>
int main(){

    int a=100, *ptr, **ptr1;
    ptr = &a;
    ptr1 = &ptr;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",ptr1);
    printf("%d\n",&ptr1);
    printf("%d\n",**ptr1);
    

    return 0;
}