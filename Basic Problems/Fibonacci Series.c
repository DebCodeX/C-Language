#include<stdio.h>
void main()
{
    int i,n,ans,num1=0,num2=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\n%d",num1);
        ans=num1+num2;
        num1=num2;
        num2=ans;
    }
}