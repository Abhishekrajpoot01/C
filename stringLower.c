#include<stdio.h>
#include<string.h>
int main()
{
    char A[]="ABHISHEK";
    int i=0;
    if(A[i]>='A' && A[i]<='Z')
    {
        A[i]=A[i]+32;
    }
    else{
            A[i]=A[i];
        }
    printf("The string in lower case is %s",A);
    return 0;    
}