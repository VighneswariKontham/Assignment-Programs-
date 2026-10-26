#include<stdio.h>
int main()
{
//final amount to be paid by a customer
    int delivery=0,discount=0,membership_type;
    float order_amount,final_amount;
    printf("Enter order amount:");
    scanf("%f",&order_amount);
    printf("\nEnter membership type(1-premium,2-regular):");

    scanf("%d",&membership_type);
    if(order_amount>=500)
    {
        if(membership_type==1)
        {
            discount=order_amount*0.1;
        }
    }
    else
    {
        delivery=50;
    }
    final_amount=order_amount-discount+delivery;

    printf("\nfinal amount=%.2f",final_amount);
    return 0;
}