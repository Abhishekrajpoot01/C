#include<stdio.h>
int main()
{
    int i,j,n,A[10];
    printf("Enter the size of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements ");
        scanf("%d",&A[i]);
    }
    printf("The elements in reverse order is ");
    j=n;
    while(j>=0)
    {
        printf("%d\n",A[j]);
        j--;
    }
}