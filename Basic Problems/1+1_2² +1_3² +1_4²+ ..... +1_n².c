#include <stdio.h>
void main()
{
    float num, sum = 0, i;
    printf("Enter the number ");
    scanf("%f", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + (1 /( i*i));
    }
    printf("The sum of the given series is %.3f", sum);
}