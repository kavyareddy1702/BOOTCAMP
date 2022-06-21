// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5 

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++){
        for(int j=row; j>=i; j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}