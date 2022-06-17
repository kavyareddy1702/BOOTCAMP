#include<stdio.h>
int main(){
    int array[100],n,sum=0, avg;
    printf("\nEnter the number of elemments in the array : ");
    scanf("%d",&n);
    printf("Enter elements of an array : \n");
    for(int i=1; i<=n; i++){
        scanf("%d",&array[i]);

    }
    for(int i=1; i<=n; i++)
    {
        sum = sum + array[i];
    }
    avg = sum/n;
    printf("Avergae of the array : %d\n",avg);
    return 0;
}

