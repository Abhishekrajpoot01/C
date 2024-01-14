#include<stdio.h>
int maxElement(int arr[],int size);
void main()
{
    int A[50],n;
    printf("Enter the size ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements ");
        scanf("%d",&A[i]);
    }
    int largest = maxElement(A,n);
    printf("the largest element %d",largest);
}
int maxElement(int arr[],int size)
{
    int large=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}