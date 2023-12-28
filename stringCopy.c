#include<stdio.h>
#include<string.h>
int main()
{
    char A[20],B[20];
    int i;
    printf("Enter the string ");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        B[i]=A[i];
    }
    B[i+1]='\0';
    printf("The copied string in B is %s",B);
    return 0;
}