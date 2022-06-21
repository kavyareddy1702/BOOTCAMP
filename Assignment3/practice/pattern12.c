#include<stdio.h>
int main(){
    int row,sp=row-1; 
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=i; j>=1; j--)
        {
            for(int i=sp; i>=1; i--){
                printf(" ");
                sp--;
            }
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}