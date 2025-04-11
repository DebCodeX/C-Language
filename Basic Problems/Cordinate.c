#include<stdio.h>

void main()
{
    int x,y;
    printf("Input the cordinate (x,y):");
    scanf("%d",&x);
    scanf("%d",&y);
    if
    (x>0  && y>0)
        printf("The cordinate points (%d,%d) are lies in first quadrant");
    else if
    (x<0 && y>0)
        printf("The cordinate points (%d,%d) are lies in second quadrant");
    else if
    (x<0 && y<0)
        printf("The cordinate points (%d,%d) are lies in third quadrant");
    else if
    (x>0 && y<0)
        printf("The cordinate points (%d,%d) are lies in fourth quadrant");
    else
        printf("The cordinate points (%d,%d) are lies in origin");
}