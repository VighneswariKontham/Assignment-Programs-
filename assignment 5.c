#include<stdio.h>
int main()
{
    int age, credit_score;
    float monthly_income;
    printf("Enter age, credit score, monthly income:");
    scanf("%d %d %f",&age,&credit_score,&monthly_income);
    if(age>=21&&age<=60)
    {   if(credit_score>=700 && monthly_income>=25000)
        {
            printf("loan approved");
        }
        else
            printf("Loan rejected");
    }
    else
        printf("loan rejected");
    return 0 ;
}