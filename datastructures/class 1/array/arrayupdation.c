#include<stdio.h>
int main(){
    char arr[]={'a','b','c','d','e'};
    char item = 'd';
    int pos =3;
    printf("Given array elements are : ");
    for(int i=0; i<5; i++){
        printf("\narr[%d] = %c\n",i,arr[i]);
    }

    arr[pos-1]=item;
    printf("\nArray elements after updation : ");
    for(int i=0; i<5; i++){
        printf("\narr[%d] = %c\n",i,arr[i]);
    }
}