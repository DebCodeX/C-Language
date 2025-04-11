#include<stdio.h>

void main()
{
    float tempt;
    printf("Input the temperature:");
    scanf("%f",&tempt);
    if
    (tempt<0)
        printf("Freezing temperature");
    else if
    (tempt<10)
        printf("Very cold temperature");
    else if
    (tempt<20)
        printf("Cold temperature");
    else if
    (tempt<30)
        printf("Normal temperature");
    else if
    (tempt<40)
        printf("Hot temperature");
    else
        printf("Very hot temperature");
}