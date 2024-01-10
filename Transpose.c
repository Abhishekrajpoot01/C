#include<stdio.h>
void main()
{
    int i,j,A[3][3],B[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the elements into A ");
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            B[j][i]=A[i][j];
        }
    }
    printf("The original matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
}