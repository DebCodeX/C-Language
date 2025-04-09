#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j,len;
	printf("Enter The String : ");
	scanf("%s",&str);
	len=strlen(str);
	for(i=1;i<=len;i++){
		for(j=1;j<=i;j++){
			printf("%c",str[j-1]);
		}
		printf("\n");		
	}
}
