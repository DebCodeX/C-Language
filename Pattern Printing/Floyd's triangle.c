#include<stdio.h>
void main()
{
	int i,j,num=1,rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++) {
            if(j<=i){
                printf("%d",num);
                ++num;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
