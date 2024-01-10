#include<stdio.h>
void main()
{
    int A[10],i,j,t;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements ");
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(A[j]>A[j+1])
            {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    printf("The sorted elements are ");
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
}