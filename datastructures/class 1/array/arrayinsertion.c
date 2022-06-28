#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int x, pos, n=5;
    printf("Array elements before insertion : \n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }

    x=20; // no. to be inserted
    pos=4; // position
    n++;

    for(int i = n-1; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1]=x;
    printf("Array elements after insertion \n");
    for(int i=0; i<n; i++){
            printf("%d\n",arr[i]);
    }
    return 0;
}