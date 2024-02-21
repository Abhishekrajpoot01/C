#include<stdio.h>
void main()
{
    char A[10],B[10];
    int i=0;
    printf("Enter the string ");
    gets(A);
    while(A[i] !='\0')
    {
        if(A[i]>='a' && A[i]<='z')
        {
        B[i]=A[i]-32;
        }
        else{
            B[i]=A[i];
        }
        i++;
    }
    B[i]='\0';
    printf("The string in upper case is %s",B);
}