#include<stdio.h>
void main ()
{
    int num1,num2,i;
    printf("Enter your initial number:");
    scanf("%d",&num1);
    printf("Enter your end number :");
    scanf("%d",&num2);
    i=num1;
    for(; i<=num2;)
    {
        printf("%d",i);
        i++;
    }
}
