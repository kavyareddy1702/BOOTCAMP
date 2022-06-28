#include<stdio.h>
int main(){

    int n, arr[100],temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter elements : \n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are : \n");
    for(int i=1; i<=n; i++){
        printf("%d\n",arr[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }

    printf("Array elements are : \n");
    for(int i=1; i<=n; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}