#include<stdio.h>
void main()
{
    int num,rev=0,rem,temp;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
        printf("Your number is a Palindrome number");
    else
        printf("Your number is not a Palindrome number");
}