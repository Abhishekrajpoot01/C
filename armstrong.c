#include<stdio.h>
int main()
{
    int n,rem=0,sum=0,k;
    printf("Enter the number ");
    scanf("%d",&n);                  // 153
    k=n;
    while(n!=0)                     //153
    {
        rem=n%10;                  //rem=3      ,5
        sum=sum+(rem*rem*rem);      //sum= 0+27,27+(125)=152
        n=n/10;                     //n=15   
    }
    if(sum==k)
    {
        printf("The number is an armstrong ");
    }
    else 
    {
        printf("The number is not an armstrong");
    }
    return 0;
}