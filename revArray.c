#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements ");
        scanf("%d",&A[i]);
    }
    printf("The elements in reverse order is ");
    j=n-1;
    while(j>=0)
    {
        printf("%d\n",A[j]);
        j--;
    }
}