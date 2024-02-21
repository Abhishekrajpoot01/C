#include<stdio.h>
void main()
{
    char A[]="Harsh";
    char B[]="Harsh";
    int i=0,l,m;
    l=strlen(A);
    m=strlen(B);
    if(l==m)
    {
        while(i<l)
        {
            if(A[i]==B[i])
            {
                i++;
            }
            else{
                break;
            }
        }
    }
    if(l==i)
    {
        printf("Similar");
    }
    else{
        printf("Dissimilar");
    }
}