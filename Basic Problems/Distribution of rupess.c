# include <stdio.h>
void main()
{
    int amount,amt;
    printf("Enter the amount : ");
    scanf("%d",&amount);
    amt=amount/2000;
    printf("2000₹ notes :%d ",amt);
    amount= amount%2000;
    amt=amount/500;
    printf("\n 500₹ notes : %d ",amt);
    amount=amount%500;
    amt=amount/200;
    printf("\n 200₹ notes : %d ",amt);
    amount=amount%200;
    amt=amount/100;
    printf("\n 100₹ notes : %d ",amt);
    amount=amount%100;
    amt=amount/50;
    printf("\n 50₹ notes : %d ",amt);
    amount=amount%50;
    amt=amount/20;
    printf("\n 20₹ notes : %d ",amt);
    amount=amount%20;
    amt=amount/10;
    printf("\n 10₹ notes : %d",amt);
    amount=amount%10;
    amt=amount/5;
    printf("\n 5₹ notes : %d",amt);
    amount=amount%5;
    amt=amount/2;
    printf("\n 2₹ notes : %d",amt);
    amount=amount%2;
    amt=amount/1;
    printf("\n 1₹ notes : %d",amt);
    amount=amount%1;
}