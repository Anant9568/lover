#include<stdio.h>
int main()
{
    int i,j,s,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=i;s<=5;s++)
        {
            printf(" ");
        }
        for(s=i;s<=5;s++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=i;s<=5;s++)
        {
            printf(" ");
        }
        for(s=i;s<=5;s++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
