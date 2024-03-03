#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the number to check whether it is prime or not ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
        count++;
    }
    }
    if(count==2)
    {
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}    