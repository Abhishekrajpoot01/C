#include<stdio.h>
#include<string.h>
int main()
{
        // with using library function
    char A[]="Harsh";
    int k;
    k=strlen(A);
     printf("The length of string using 'strlen'() is %d\n",k);
    int i=0,l=0;             
    while(A[i]!='\0')       
    {
        i++;
        l++;
    }
    printf("The length of string without using 'strlen'() is %d",l);
     return 0;

}