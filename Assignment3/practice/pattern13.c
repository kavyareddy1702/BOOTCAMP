#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int sp=n; 
    for(int i=1; i<=n; i++)
    {
        // for upper spaces 
        for(int j=1; j<=sp-i; j++){
            printf(" ");
            sp--;
        }
        // for upper stars
        for(int j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}