#include<stdio.h>
int main()
{
    int a[3][3];
    printf("Enter nine elements\n");
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array elements are : \n");
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    return 0;
}