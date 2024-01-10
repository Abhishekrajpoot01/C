#include<stdio.h>
void main()
{
    char A[3],B[3];
    int i=0,l,m;
    printf("Enter first string ");
    gets(A);
    printf("Enter second string ");
    gets(B);
    l=strlen(A);
    m=strlen(B);
    if(l==m)
    {
            while(i<l)
            {
                if(A[i]==B[i]){
                    i++;
                }
                else{
                    break;
                }
            }
    }
    if(l==i)
    {
        printf("The strings are similar");
    }
    else if(l>i)
    {
        printf("The first string is large");
    }
    else if(l<i)
    {
        printf("The second string is large ");
    }
}