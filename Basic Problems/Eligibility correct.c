#include<stdio.h>

void main()
{
    int m,c,p,total,mp;
    printf("Eligibility criteria in the exam:");
    printf("\nMarks in Mathematics >=65");
    printf("\nMarks in Physics >=55 ");
    printf("\nMarks in Chemistry>=50");
    printf("\nTotal marks in all three subject >=190");
    printf("\nTotal marks in Maths and Physics >=140 ");
    printf("\n--------------------------------");
    printf("\nInput the marks obtained in Mathematics:");
    scanf("%d",&m);
    printf("Input the marks obtained in Physics:");
    scanf("%d",&p);
    printf("Input the marks obtained in Chemistry:");
    scanf("%d",&c);
    total=m+p+c;
    printf("Total marks of Maths, Physics and Chemistry :%d",total);
    mp=m+p;
    printf("\nTotal marks of Maths and Physics:%d ",mp);
    if
    ((m >=65 && p>=55 && c>=50 && total>=190 && (m+p+c)>=190 )|| (m+p)>=140)
        printf("The candidate are eligible");
        else
            printf("\nThe candidate are not eligible");

        }