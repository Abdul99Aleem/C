#include <stdio.h>

int main()
{
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        // Print spaces
        for (space = 1; space <= rows - i; space++)
            printf(" ");

        // Print left half of the pyramid
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == rows)
                printf("%d", j);
            else
                printf(" ");
        }

        // Print right half of the pyramid
        for (j = i - 1; j >= 1; j--)
        {
            if (j == 1 || j == i - 1 || i == rows)
                printf("%d", j);
            else
                printf(" ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
