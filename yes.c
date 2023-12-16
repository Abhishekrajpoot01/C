#include<stdio.h>
void natural(int);
int main()
{
    int n=1;
    natural(n);
    return 0;
}
void natural(int n)
{
    if(n<=25)
    {
        printf(" %d",n);
        natural(n+1);
    }
}