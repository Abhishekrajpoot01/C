#include<stdio.h>
#include<conio.h>
void main()
{
    int f=0,s=1,i,n,next;
    printf("\n Enter the term ");
    scanf("%d",&n);
    printf("\n First %d term in fibonassi series is:",n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
    {
        next =i;
    }
    else
    {
        next =f+s;
        f=s;
        s=next;
    }
    printf("\n%d",next);
    getch();
    }
}