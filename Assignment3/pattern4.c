#include<stdio.h>
int main(){
    num=1;
    for(int i=1; i<=3; i++)
    {
        printf("%d",i);
        for(int j=i; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}