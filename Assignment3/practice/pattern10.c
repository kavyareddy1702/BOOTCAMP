//Floyd's triangle
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include<stdio.h>
int main(){
    int row, count=1; 
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}