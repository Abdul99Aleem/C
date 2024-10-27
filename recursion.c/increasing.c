#include <stdio.h>
// patametrized way
void increasing(int x,int n)
{
    if (x>n)
        return;
    printf("%d\n", x);
        increasing(x + 1,n);
    return;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    increasing(1,n);
    return 0;
}

// Another way
/*
#include <stdio.h>
void decreasing(int n)
{
    if (n == 0) return;
           decreasing(n - 1);
        printf("%d\n", n);
    return;
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    decreasing(n);
    printf("0");
    return 0;
}
*/