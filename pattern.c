#include<stdio.h>
int main(){
    int i,j,k,c=4;
    for(i=0;i<6;i++){
        for(k=c; k>=0; k--){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        c--;
    printf("\n");
    }
return 0;
}