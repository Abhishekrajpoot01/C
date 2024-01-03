#include<stdio.h>
struct DOB
{
    int day;
    int month;
    int year;
};
struct student
{
    char Name[20];
    int roll;
    char Course[10];
    struct DOB date;
};
int main()
{
    struct student s1={"Abhishek rajput",108,"MCA",18,04,2003};
    printf("The name of student is %s",s1.Name);
    printf("\nThe roll of student is %d",s1.roll);
    printf("\nThe course is %s",s1.Course);
    printf("\nThe DOB of student is %d-%d-%d",s1.date.day,s1.date.month,s1.date.year);
    return 0;
}