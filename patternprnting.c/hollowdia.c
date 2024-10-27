#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j<=n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*i)-1; j++)
        {
            if((j==1)||(j==(2*i)-1)){
            printf("*");
            }
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if ((j == 1) || (j == 2 * i - 1))
            {
            printf("*");
            }
        }
        printf("\n");
    }

return 0;
}