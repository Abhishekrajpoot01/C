#include<stdio.h>
void natural(int n);
void main()
{
    int n=1,k;
    // printf("Enter the number you want to print to ");
    // scanf("%d",k);
    natural(n);

}
void natural(int n)
{
    if(n<=25)
    {
        printf("%d ",n);
        natural(n+1);
    }
}