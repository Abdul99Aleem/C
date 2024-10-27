// method 1
// #include <stdio.h>
// void main(int n, int s)
// {
//     if (n == 0)
//     {
//         printf("%d", s);
//         return;
//     }
//     sum(n - 1, n + s);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     sum(n, 0);
//     return 0;
// }

// method 2

#include <stdio.h>
    int
    sum(int n)
{
    if (n == 0 || n==1)
        return n;
    int RecAns = n + sum(n - 1);
    return RecAns;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int fact = sum(n);
    printf("%d", fact);
    return 0;
}
