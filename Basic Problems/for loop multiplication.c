#include<stdio.h>
void main()
{
int n,multi=1,i;
printf("Enter your range number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
multi=multi*i;
}
printf("%d",multi);
}