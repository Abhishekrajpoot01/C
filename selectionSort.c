#include<stdio.h>
void main()
{
    int A[10],i,j,t;
    for(i=0;i<10;i++){
    printf("Enter the elements ");
    scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    printf("The sort elements are ");
    for(i=0;i<10;i++)
    {
        printf("%d\n",A[i]);
    }
}