#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int sum = print(n);
    printf("Sum is %d",sum);
}
int print(int n)
{   
    if(n==1)
    {
        return 1;
    }
    return n+print(n-1);
}