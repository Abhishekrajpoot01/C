#include<stdio.h>
#include<math.h>
int main()
{
    long int x,y;
    printf("Enter the base ");
    scanf("%ld",&x);
    printf("Enter the exponent ");
    scanf("%ld",&y);
    printf("The value of x raised to y is %ld ",(long int)pow(x,y));
    return 0;
}