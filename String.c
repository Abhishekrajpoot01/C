        /* program to demonstrate printing of a string*/

#include<stdio.h>
void main()
{
    char name[]="abhishek";
    int i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
}        