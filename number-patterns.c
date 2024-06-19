#include<stdio.h>
int main()
{
    int n,i,j,v=1;
    scanf("%d",&n);
    int s=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=v;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        s--;
        v=v+2;
    }
    s=1,v=2*n-3;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<=v;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        s++;
        v=v-2;
    }
    return 0;
}
