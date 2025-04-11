#include<stdio.h>

void main()
{
int a,b,c,surface_area;
printf("Enter the length of the cuboid:");
scanf("%d",&a);
printf("Enter the width of the cuboid:");
scanf("%d",&b);
printf("Enter the height of the cuboid:");
scanf("%d",&c);
surface_area=2*(a*b+b*c+c*a);
printf("The surface area of the cuboid is %d",surface_area);
}