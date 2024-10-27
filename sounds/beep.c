#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);
    int x = strlen(str);
    printf("%d", x - 1);

    return 0;
}
