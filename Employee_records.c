#include<stdio.h>
struct employee
{
    char empName[20];
    int empId;
    int sal;
    char Add[20];
    int exp;    
};
void main()
{
    struct employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter employee details %d ",i+1);
        printf("\nEnter employee name : ");
        gets(e[i].empName);
        fflush(stdin);
        printf("Enter employee id : ");
        scanf("%d",&e[i].empId);
        fflush(stdin);
        printf("Enter employee address : ");
        gets(e[i].Add);
        fflush(stdin);
        printf("Enter employee experience : ");
        scanf("%d",&e[i].exp);
        fflush(stdin);
        printf("Enter employee salary : ");
        scanf("%d",&e[i].sal);
        fflush(stdin);
    }
    for(i=0;i<3;i++)
    {
        printf("\n***Employee records*** %d ",i+1);
        printf("\nEmployee name : %s",e[i].empName);
        printf("\nEmployee id : %d",e[i].empId);
        printf("\nEmployee address : %s",e[i].Add);
        printf("\nEmployee experience : %d",e[i].exp);
        printf("\nEmployee salary : %d",e[i].sal);
    }
}
