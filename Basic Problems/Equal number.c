#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    if(a>=b)
        printf("The given numbers are equal");
    else
        printf("The given numbers are not equal");
}