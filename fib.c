#include<stdio.h>
int main()
{
    int n,x,y,sum;
    printf("Enter the max size ");
    scanf("%d",&n);
    x=0;y=1;sum=0;
    while(sum<=n)
    {
        printf("%d ",sum);
        x=y;
        y=sum;
        sum=x+y;
    }

}