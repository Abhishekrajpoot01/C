#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}