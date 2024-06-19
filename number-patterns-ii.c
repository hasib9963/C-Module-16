#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int s=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        s--;
    }
    return 0;
}
