#include<stdio.h>

void main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("The given number is even");
    else
        printf("The given number is odd");
}