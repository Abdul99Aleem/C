#include<stdio.h>
int main ()
{
    int n,count,k;
    count=1;
    scanf("%d",&n);
    for(int i;i<=n;i++)
        {for (int j = 1; j<=i ; j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
        }
        k=n*(n+1)/2;
    for (int i = 1; i <=k; i++)
    {
        printf("%d",k);
    }
    printf("\n");
    k=n*(n+1)/2;
    for (int i = n; i>=1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",k);
            k--;
        }
    printf("\n");
        
    }
    
    
return 0;
}