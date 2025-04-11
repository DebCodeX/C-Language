#include<stdio.h>
void main()
{
    int n,i,temp,rem,sum=0,multi;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        multi=1;
        for(i=1; i<=rem; i++)
        {   multi=multi*i;
        }
        sum=sum+multi;
        n=n/10;
    }
    if(temp==sum)
        printf("%d is a strong number",temp);
    else
        printf("%d is not a strong number",temp);
}
