#include<stdio.h>
int main()
{
    int i,j,a[2][2],b[2][2],sum[2][2],pr[2][2];
    printf("Enter elements of matric 1 ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("\nEnter element %d,%d: ",i,j);
         scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements for matric 2 ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter element %d,%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //for sum
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    //for product
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        pr[i][j]=0;
        {
            for(int k=0;k<2;k++)
            {
                pr[i][j]=pr[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d", pr[i][j]);
        }
        printf("\n");
    }
    return 0;
}