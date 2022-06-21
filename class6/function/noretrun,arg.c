#include<stdio.h>
void add(int, int);
void add(int a, int b){
    int c;
    c = a+b;
    printf("Sum : %d\n",c);

}
int main()
{
    int x, y;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);
    add(x, y);
    return 0;
}