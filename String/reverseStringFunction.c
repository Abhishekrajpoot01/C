#include<stdio.h>
void reverse();
void main()
{
    reverse();
}
void reverse()
{
    char A[10];
    int i,l=0;
    printf("Enter the string ");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        l++;
    }
    printf("The reverse string is ");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",A[i]);
    }
}