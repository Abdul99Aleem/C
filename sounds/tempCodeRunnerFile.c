#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, result;
    char choice;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%f", &a);

    printf("Enter second integer: ");
    scanf("%f", &b);

    printf("Press 1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    choice=getchar();

    switch (choice)
    {
    case 1:
        result = a + b;
        printf("Result: %f\n", result);
        break;
    case 2:
        result = a - b;
        printf("Result: %f\n", result);
        break;
    case 3:
        result = a * b;
        printf("Result: %f\n", result);
        break;
    case 4:
         result = a / b;
        printf("Result: %f\n", result);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
