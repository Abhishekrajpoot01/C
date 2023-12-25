#include<stdio.h>
int fact(int n);
int main()
{
    int n,f=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    // fact(n);
    printf("The factorial is %d",fact(n));
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}