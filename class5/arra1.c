// #include<stdio.h>
// int main()
// {
//     int a[3][3];
//     printf("Enter nine elements\n");
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=3; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//     }
// }

#include<stdio.h>
int main()
{
    int array[100][100],row, col, sum=0;
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
    printf("\n");
    printf("Pattern 1\n\n");
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i==j)
            {
                printf("%d\t",array[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("Pattern 2\n\n");
    
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if((i+j)%2==0)
            {
                printf("%d\t",array[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("Pattern 3\n\n");
    
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if((i+j)%2!=0)
            {
                printf("%d\t",array[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("Addition : \n");

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++)
        {
            if(i!=j)
            {
                sum = sum + array[i][j];
            }
        }
    }
    printf("sum = %d\n", sum);
}


