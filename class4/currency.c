#include<stdio.h>
int main()
{
    int op,amount;
    printf("------C U R R E N C Y   C O N V E R T E R------\n\n");
    printf("INDIAN TO\n");
    printf("1.DOLLARS\n");
    printf("2.POUNDS\n");
    printf("3. EUROS\n");
    scanf("%d",&op);
    printf("Enter the amount : ");
    scanf("%d",&amount);

    switch(op){
        case 1:
        printf("Amount in dollars : %f dollars",amount*0.013);
        break;
        case 2:
        printf("Amount in pounds : %f pounds",amount*0.010);
        break;
        case 3:
        printf("Amount in euors : %f euros",amount*0.012);
        break;
        default:
        printf("Select a valid choice");
        break;
    }


    return 0;
}