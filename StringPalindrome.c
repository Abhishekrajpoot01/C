#include<stdio.h>
int main()
{
    char A[10];
    int length,k;
    printf("Enter the string to check ");
    gets(A);                                        
    length = strlen(A);                             
    length = length-1;                               
    k=0;
    while(length>k)                                 
    {
        if(A[length]!=A[k])                         
        {
            printf("The string is not palindrome ");
            return 0;
        }
        length--;
        k++;
    }
    printf("The string is palindrome ");
    return 0;
}