#include<stdio.h>

void main()
{
    int a,b,c,d,e;
    float avg;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    printf("Enter the 3rd number:");
    scanf("%d",&c);
    printf("Enter the 4th number:");
    scanf("%d",&d);
    printf("Enter the 5th number:");
    scanf("%d",&e);
    avg=(float)(a+b+c+d+e)/5;
    printf("%f",avg);
}