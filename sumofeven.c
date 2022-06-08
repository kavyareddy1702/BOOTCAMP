#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter term upto which you want to calculate the sum of even numbers : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    printf("Sum of all even number upto %d : %d ",n,sum);
}