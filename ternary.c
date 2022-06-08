#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    (n%2==0)?printf("number is Even"):printf("number is odd");
    return 0;
}