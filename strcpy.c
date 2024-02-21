#include<stdio.h>
void main()
{
    char A[10],B[10];
    int i=0;
    printf("Enter the string in A ");
    gets(A);
    while(A[i]!='\0')
    {
        B[i]=A[i];
        i++;
    }
    B[i]='\0';
    printf("The copied string in B is %s",B);
}