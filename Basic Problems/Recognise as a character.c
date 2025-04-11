#include<stdio.h>

void main()
{
    char c;
    printf("Input the character:");
    scanf("%c",&c);
    if
    (c>='A' && c<='Z' || c>='a' && c<='z')
        printf("The given character is an alphabet");
    else if
    (c>='0' && c<= '9')
        printf("The given character is a digit");
    else
        printf("The given character is a special character");
}