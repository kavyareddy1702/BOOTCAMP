#include<stdio.h>
int main()
{
    int arr[5], *ptr[5];
    printf("Enter elements : \n");
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    printf("Elements are : \n");
    for(int i=1; i<=5; i++)
    {
        printf("%d\n",*ptr[i]);
    }
    return 0;
}