// sort array for decending to ascending
#include<stdio.h>
int min(int a, int b)
{
    int min;
    if(a>b){
        min = b;
    }
    else{
        min = a;
    }
    return min;
}
int max(int a, int b)
{
    int max;
    if(a>b){
        max = a;
    }
    else{
        max = b;
    }
    return max;
}
int main(){
    int array[100],n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter elements of array : \n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=1; i<=n; i++)
    {
        min(array[i],array[i+1]);
        max(array[i],array[i+1]);
    }
return 0;
}


  
//function