#include<stdio.h>
void swap(int x,int y);
void main()
{
    int a,b;
    printf("Enter two values ");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("The swapped value %d %d ",x,y);
}