#include<stdio.h>
int main()
{
    int  A[2][2],B[2][2],c[2][2],i,j;
    printf("enter the 4 values for matrix A");
    for (i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&B[i][j]);
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        c[i][j]=A[i][j]+B[i][j];
        printf("sum=\n");
        for (i=0;i<2;i++)
            for(j=0;j<2;j++)
            printf("d",c[i][j]);
        printf("\n");


 return 0;}
