#include<stdio.h>
void main()
{
    int A[10],i,n,f=0,pos=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the number into array :");
        scanf("%d",&A[i]);
    }
    printf("Enter the number to search :");
    scanf("%d",&n);           
                        // code for linear search
    for(i=0;i<10;i++)
    {
        if(A[i]==n)
        {
            f=1;
            pos=i+1;
        }
    }             
    if(f==1)
    {
        printf("The number %d is found at pos (%d)",n,pos);
    }       
    else
    {
        printf("The number is not found ");
    }
    }