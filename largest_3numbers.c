#include<stdio.h>
struct number
{
    int a;
    int b;
    int c;
};
void main()
{
    struct number n;
    printf("Enter first number ");
    scanf("%d",&n.a);
    printf("Enter second number ");
    scanf("%d",&n.b);
    printf("Enter third number ");
    scanf("%d",&n.c);
    if((n.a>n.b) && (n.a>n.c))
    {
        printf("A is largest %d",n.a);
    }
    else if((n.b>n.a) && (n.b>n.c))
    {
        printf("B is largest %d",n.b);
    }
    else if((n.c>n.a) && (n.c>n.b))
    {
        printf("C is largest %d",n.c);
    }
}