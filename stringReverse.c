#include<stdio.h>
#include<string.h>
int main()
{
    char A[20];
    int l=0,i;
    printf("Enter the string to reverse without using library function \n");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        l++;
    }
    printf("The reverse string is \n");
    for(i=l-1;i>=0;i--)
    {
    printf("%c",A[i]);
    }
    return 0;
}