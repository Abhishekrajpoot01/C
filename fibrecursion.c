#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,next;
    printf("Enter the term ");
    scanf("%d",&n);
    fib(t1,t2,n);
}
void fib(int x,int y,int z)
{
    if(z>0)
    {
        printf("%d ",x);
        fib(y,x+y,z-1);
    }

}