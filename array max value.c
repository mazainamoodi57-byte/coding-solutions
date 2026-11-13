#include<stdio.h>
void main()
{
    int m[5],i,max;
    printf("enter 5 numbers:");
    for (i=0;i<5;i++)
        scanf("%d",&m[i]);
    for (i=0;i<5;i++)
    {
        if(m[i]>max)
        {
            max=m[i];

        }

    }
    printf("max=%d",max);
}




