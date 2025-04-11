#include <stdio.h>
void main()
{
    int num, sum = 0, i;
    printf("Enter the number ");
    scanf("%d", &num);
    for (i = 1; i <= num; i=i+2)
    {
        sum = sum +i;
    }
    printf("The sum of the given series is %d", sum);
}