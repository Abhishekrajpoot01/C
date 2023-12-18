#include<stdio.h>
int areacircle(int *x);
void main()
{
    int r;
    printf("Enter the radius of circle ");
    scanf("%d",&r);
    float Area=areacircle(&r);
    printf("The area of circle is %.2f",Area);
}
int areacircle(int *x)
{
    float pi=3.14;
    float ar=pi*(*x)*(*x);
    return ar;
}