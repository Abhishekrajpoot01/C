#include<stdio.h>
int main()
{
    struct book{
        char name[50]; float price; int pages;
    };
    struct book b1,b2,b3;
    printf("Enter names,price and page no. of 3 book1 ");
    scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
    printf("Enter names,price and page no. of book2 ");
    scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
    printf("Enter names,price and page no. of book3 ");
    scanf("%s%f%d",b3.name,&b3.price,&b3.pages);
    printf("The names,price and page no. of books you entered are ");
    printf("\n%s %.2f %d",b1.name,b1.price,b1.pages);
    printf("\n%s %.2f %d",b2.name,b2.price,b2.pages);
    printf("\n%s %.2f %d",b3.name,b3.price,b3.pages);
    return 0;
}