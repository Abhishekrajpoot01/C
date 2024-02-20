#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("INPUT.txt","w");
    if(fp==NULL)
    {
        printf("File is not opened");
        exit(0);
    }
                                // writing into file
    while((ch=getchar()) != EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("INPUT.txt","r");
    while((ch=getc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}