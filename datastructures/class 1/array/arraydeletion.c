#include<stdio.h>
int main(){
    int arr[100],n,pos;
    printf("\n Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements of the array : \n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }

    printf("Enter the position : ");
    scanf("%d",&pos);

    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("After deletion :\n");
    for(int i=0;  i<n; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
