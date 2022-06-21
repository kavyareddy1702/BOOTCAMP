#include<stdio.h>
int add(int,int);
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int x,y, res;
    int (*ptr)(int, int)=&add;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);
    res = ptr(x,y);
    printf("Sum : %d\n",res);
    return 0;
}