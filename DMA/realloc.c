#include<stdlib.h>
#include<stdio.h>
int main(){
    int n, *ptr;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    printf("Enter elements : \n");
    for(int i=0; i<n; i++){
        scanf("%d",(ptr+i));
    }
    printf("Elements are : \n");
    for(int i=0; i<n; i++){
        printf("%d\n",(*ptr+i));
    }
    if(ptr==NULL){
        printf("not defined");
        exit(0);
    }
    ptr = (int*)realloc(ptr,n*sizeof(int));
    return 0;
}