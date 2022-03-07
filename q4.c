#include<stdio.h>
int main()
{
    int a=0,b=1,next,n,i;
    printf("Enter the no. of terms upto which you want to print the series :");
    scanf("%d",&n);
    printf("\n 0 1 ");
    next = a+b;
    printf("%d ",next);
    for(i=3;i<=n;i++)
    {
        printf("%d ",next);
        a=b;
        b=next;
        next = a + b;
    }
    return 0;
}