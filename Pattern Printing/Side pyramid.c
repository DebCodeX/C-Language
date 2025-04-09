#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=4; j++) {
            if(j <= i && j <= 8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
