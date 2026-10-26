#include<stdio.h>
int main()
{
//The area and perimeter of rectangle
    float length,breadth,area,perimeter ;
    printf("Enter length and breadth values:");
    scanf("\n%f%f",& length,& breadth);
    printf("\nlength=%f, breadth=%f", length,breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("\narea of rectangle is %.2f",area);
    printf("\nperimeter of rectangle is %.2f", perimeter);
    return 0;
}