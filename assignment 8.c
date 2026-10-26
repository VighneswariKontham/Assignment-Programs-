#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("Enter weight (kg), height(m):");
    scanf("%f %f",&weight,&height);
    BMI=weight/(height*height);
    printf("\nBMI value is %.2f",BMI);
    if(BMI<18.5)
        printf("\nUnderweight");
    else if(BMI<25)
        printf("\nNormal");
    else if(BMI<30)
        printf("\nOverweight");
    else
        printf("\nObese");
    return 0;
}
    