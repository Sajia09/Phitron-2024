#include<stdio.h>
int main()
{
    int n,k,s;
    scanf("%d",&n);
    k=n,s=1; 

    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        s++;
        k=k-2;
        printf("\n");
    }

    return 0;
}