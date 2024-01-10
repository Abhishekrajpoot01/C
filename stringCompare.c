#include<stdio.h>
#include<string.h>
void main()
{
    char A[]="Abhishek";
    char B[]="abhishek";
    int l;
    l=strcmp(A,B);
    if(l==0)
    {
    printf("The strings are similar ");
    }
    else{
        printf("The string are not similar ");
    }
}