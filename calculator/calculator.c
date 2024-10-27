#include <stdio.h>
int main()
{
    printf("***BASIC TWO OPERAND CALCULATOR ENTER YOUR STATEMENT (Two Numbers ) WITH OPERAND:***");
    int a;
    scanf("%d", &a);
    char ch;
    scanf("%c", &ch);
    int b;
    scanf("%d", &b);

    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%f", (float)a / b);
        break;
    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}