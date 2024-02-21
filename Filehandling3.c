#include<stdio.h>
void main()
{
    FILE *fp1,*fp2,*fp3;
    int n,m,i;
    fp1=fopen("DATA.txt","w");
    if(fp1==NULL)
    {
        printf("The file is not opened ");
        exit(0);
    }
    for(i=0;i<10;i++)
{
    printf("Enter the number ");
    scanf("%d",&n);
    putw(n,fp1);
}
fclose(fp1);
fp1=fopen("DATA.txt","r");
fp2=fopen("EVEN.txt","w");
fp3=fopen("ODD.txt","w");

while((m=getw(fp1)) != EOF)
{
    if(m<0)
    {
        break;
    }
    else if(m%2==0)
    {
        putw(m,fp2);
    }
    else
    {
        putw(m,fp3);
    }
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
fp2=fopen("EVEN.txt","r");
fp3=fopen("ODD.txt","r");
printf("\n The even number ");
while((m=getc(fp2)) !=EOF)
{
    printf("%d",m);
}
printf("\n The odd number ");
while((m=getc(fp3)) != EOF)
{
    printf("%d",m);
}
fclose(fp2);
fclose(fp3);
}