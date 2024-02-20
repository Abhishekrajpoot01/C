#include<stdio.h>
void main()
{
    FILE *fp;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fp=fopen("DATA.txt","w");
    if(fp==NULL)
    {
        printf("The file is not opened ");
        exit(0);
    }
    fprintf(fp,"Num = %d",num);
    fclose(fp);
}
