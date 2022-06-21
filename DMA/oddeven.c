#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr,even=0,odd=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("undefined");
        exit(0);
    }
    printf("Enter elements : \n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Elements are : \n");
    for(int i=1; i<=n; i++){
    printf("%d\n",*(ptr+i));
    if(*(ptr+i)%2==0){
        even = even+ *(ptr+i);
    }
    else{
        odd = odd+ *(ptr+i);
    }
    }
    printf("Sum of odd numbers : %d\n",odd);
    printf("Sum of even numbers : %d\n",even);
    


    return 0;
}