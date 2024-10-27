#include <stdio.h>

int getSum(int a)
{
    int ans = 0;
    
    for (; a != 0; a = (a / 10) + 1)
    {
        ans += a % 10;
    }
    return ans;
}

int main()
{
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = getSum(n);

    printf("The sum of digits is %d", sum);

    return 0;
}