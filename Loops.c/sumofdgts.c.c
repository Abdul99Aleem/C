#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    if
    {
        return a;
    }
    else if
    {
        return b;
    }
    else if
    {
        return c;
    }
    else if
    {
        return c;
    }
    else
    {
        return d;
    }
    return (a > b && a > c && a > d) ? a : (b > c && b > d) ? b: (c > d)? c: d;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
