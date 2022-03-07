#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50], s2[50], c[50];
    int i, len=0, l=0;
    printf("Enter 1st string : ");
    scanf("%s",s1);
    printf("\nEnter 2st string : ");
    scanf("%s",s2);
    strcat(s1,s2);
    len = strlen(s1);
    l = len - 1 ;
    for(i=0;i<len;i++)
    {
        c[i]=s1[l];
        l--;
    }
    printf("\n%s",c);
    return 0;
}