
// 2 3X3 matrix wap a c program to output the sum of 2 arrays in a third array
#include<stdio.h>
int main(){
    int array1[100][100], array2[100][100], sumarray[100][100], n=3;
    printf("1st Array\n");
    printf("Enter elements of first array:\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d",&array1[i][j]);
        }
    }
    
    printf("Enter elements of second array:\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            scanf("%d",&array2[i][j]);
        }
    }

    printf("Elements of the first array: \n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d  ",array1[i][j]);
        }
        printf("\n");
    }
    printf("Elements of the second array: \n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d  ",array2[i][j]);
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++){
            sumarray[i][j] = array1[i][j]+ array2[i][j];
        }
    }

    printf("After addition : \n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d  ",sumarray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

