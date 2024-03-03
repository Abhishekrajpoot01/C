#include<stdio.h>
void main()
{
    int Arr[10],i,sum=0,*p;
    p=&Arr;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements ");
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+Arr[i];
    }
    printf("The sum is %d",sum);
}