#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=8; j++) {
            if(j >=i && j<= 4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
