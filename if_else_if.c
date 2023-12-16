#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter the marks ");
    scanf("%d",&marks);
 
    if(marks>=80)
    {
        printf("Excellent");
    }
    else if((marks>=60) && (marks<=80))
    {
        printf("Very good");
    }
    else if((marks>=40) && (marks<=50))
    {
        printf("Good");
    }
    else{
        printf("poor");
    }
}