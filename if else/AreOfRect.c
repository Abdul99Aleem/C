#include <stdio.h>
int main()
{
    int length;
    printf("Enter the Length of Rectangle :");
    scanf("%d", &length);
    int breadth;
    printf("Enter the breadth of Rectangle :");
    scanf("%d", &breadth);
    printf("Area of the rectangle is : %d\n", length * breadth);
    printf("Perimeter of the rectangle is : %d\n", 2 * (length + breadth));

    int a = length * breadth;
    int b = 2 * (length + breadth);

    if (a < b)
    {
        printf(" Area is lesser than perimeter of the given rectangle ");
    }
    if (a > b)
    {
        printf("Area is greater than perimeter");
    }
    if (a == b)
    {
        printf("area is equal to perimeter");
    }

    return 0;
}