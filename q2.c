#include<stdio.h>
int main()
{
     int a[10], i, j, s1=0, s2=0;
     printf("Enter 10 integers");
     for(i=0;i<10;i++)
     {
        printf("\nEnter integer %d : ",i+1);
        scanf("%d",&a[i]);
     }
     for(j=0;j<10;j++)
     {
         if(a[j]%2==0)
         s1=s1+a[j];
         else
         s2=s2+a[j];
     }
     printf("\n odd sum = %d",s2);
     printf("\n even sum = %d",s1);
}