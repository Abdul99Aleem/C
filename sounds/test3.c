#include<stdio.h>
int main ()
{   
    float a,b,result;
    char choice=0;
    printf("\nPress (1) For addition (2) For substraction (3) For multiplication (4) For division");
    printf("\nEnter choice");
    choice=getchar();
    printf("\nEnter 2 numbers");
    scanf("%f%f",&a,&b);
    switch(choice)
    {
    case '1':
        result = a + b;
        break;
    case '2':
        result = a - b;
        break;
    case '3':
        result = a * b;
        break;
    case '4':
        result = a / b;
        break;
    default:
        printf("Invalid choice\n");
    }
    printf("\n ans=%f",result);

return 0;
}