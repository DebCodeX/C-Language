#include<stdio.h>

void main()
{
    char alphabet;
    printf("Enter the Alphabet:");
    scanf("%c",&alphabet);
    if(alphabet =='a'|| alphabet=='e'|| alphabet=='i'|| alphabet=='o'|| alphabet=='u'||alphabet =='A'|| alphabet=='E'|| alphabet=='I'|| alphabet=='O'|| alphabet=='U')
        printf("The Given number is vowel");
    else
        printf("The Given letter is consonant");
}