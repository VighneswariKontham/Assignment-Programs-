#include<stdio.h>
int main()
{
//student grade
    int mark;
    printf("Enter mark: ");
    scanf("%d",&mark);
    if(mark<0||mark>100)
    
        printf("invalid mark");
        else if(mark>=90)
            printf("grade is O");
        else if(mark>=80)
            printf("grade is A+");
        else   if(mark>=70)
            printf("grade is A");
        else   if(mark>=60)
            printf("grade is B");
        else  if(mark>=50)
            printf("grade is C");
    
    else
        printf("fail");
    return 0;
}