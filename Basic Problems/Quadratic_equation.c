#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,discriminant;
	float root1,root2,real,img;
	printf("Enter the Co-efficient1 :");
	scanf("%d", &a);
	printf("Enter the Co-efficient2 :");
	scanf("%d",&b);
	printf("Enter the Co-efficient3 :");
	scanf("%d",&c);
	
	discriminant=b*b-4*a*c;
	if(discriminant>0){
	root1 = ((-b)+sqrt(discriminant))/(2*a);
	root2 = ((-b)-sqrt(discriminant))/(2*a);
	printf("Root1: %f",root1);
	printf("\nRoot2: %f",root2); 
}
	else if(discriminant==0){
	root1=root2=(-b)/(2*a);
	printf("Root1: %f",root1);
	printf("\nRoot2: %f",root2); 
	}
	else{
	real=(-b)/(2*a);
	img=sqrt(-(discriminant))/(2*a);
	printf("rootl %.2f+i%.2f",real,img);
	printf("\nroot2 %.2f+i%.2f",real,img);
}
}
