#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter X-coordinate of the point :");
    scanf("%d", &x);
    printf("Enter Y-coordinate of the point :");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("Given point lies on Origin.");
    }
    else if (x == 0)
    {
        printf("Given point lies on Y-Axis");
    }
    else
    {
        printf("The given point lies on x-axis");
    }

    return 0;
}