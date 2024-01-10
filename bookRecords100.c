#include<stdio.h>
struct book{
    char btitle[20];
    char baname[20];
    int price;
    int page;
    int edition;
    char pname[20];
};
void main()
{
    struct book b[100];
    int i;
    for(int i=0;i<100;i++)
    {
        printf("Enter book title ");
        gets(b[i].btitle);
        fflush(stdin);
        printf("Enter book author name ");
        gets(b[i].baname);
        fflush(stdin);
        printf("Enter book price ");
        scanf("%d",&b[i].price);
        fflush(stdin);
        printf("Enter total number of pages ");
        scanf("%d",&b[i].page);
        fflush(stdin);
        printf("Enter book edition ");
        scanf("%d",&b[i].edition);
        fflush(stdin);
        printf("Enter book publication name ");
        gets(b[i].pname);
        fflush(stdin);
    }
    printf("\nThe book records ");
    for(i=0;i<100;i++)
    {
        printf("\nThe book details %d",i+1);
        printf("\nThe book title %s",b[i].btitle);
        printf("\nThe book author name %s",b[i].baname);
        printf("\nThe book price %d",b[i].price);
        printf("\nTotal number of pages %d",b[i].page);
        printf("\nThe book edition %d",b[i].edition);
        printf("\nThe book publication name %s",b[i].pname);
    }
}