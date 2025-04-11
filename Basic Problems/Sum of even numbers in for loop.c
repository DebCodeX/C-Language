#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Print sum of even numbers till:");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {   if(i%2==0)
            sum=sum+i;
            }
        {
            printf("\nsum of even numbers is %d",sum);
        }
        
    
}