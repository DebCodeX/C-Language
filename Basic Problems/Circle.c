#include<stdio.h>
void main()
{
int radius; 
float area,perimeter;
   printf("Enter the radius of the circle: ");
   scanf("%d",& radius);
   float pi= 3.141592654;
   area= 3.141592654*radius*radius;
   printf(" The area of the circle is%f",area);
   perimeter= 3.141592654*2*radius;
   printf("\n The perimeter of the circle is%f",perimeter);
}