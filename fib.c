#include<stdio.h>
int main()
{
    int t1=0,t2=1,next,n;
    printf("Enter the term ");
    scanf("%d",&n);
    // printing first two number
    printf("%d %d",t1,t2);
    // printing rest number
    for(int i=3;i<=n;i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d ",next);
    }
    return 0;
}