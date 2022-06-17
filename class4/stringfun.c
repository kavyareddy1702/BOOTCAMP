#include<stdio.h>
#include<string.h>
int main(){

    char a[10]= "kavya", b[10] = "reddy", c[10], d[10]= "kavya";

    //strlen
    printf("The length of string a is %lu", strlen(a));

    // strcpy
    strcpy(c,a);
    printf("The value in c: %s",c);

    //strcmp
    if(strcmp(a,d)==0){
        printf("The two strings are equal");

    }
    else{
        printf("The two strings are equal");

    }

    //strcat
    printf("After concatenation : %s",strcat(a,b));

    return 0;
}

//65 90