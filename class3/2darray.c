#include<stdio.h>
int main()
{
    int array[100][100],row, col;
    printf("Enter the size of array : \n");
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&col);
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("Elements of the array : \n");
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}