#include<stdio.h>
void main()
{
    char A[]="abhishek";
    char B[]="abhishek";
    int l= strcmp(A,B);
    if(l==0){
        printf("similar ");
    }
    else{
        printf("Dissimilar");
    }
}