#include<stdio.h>
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

   /* int a=1;
    int b=1;
    int sum=1;

    for (int i = 1; i <=n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;

    }
    printf("The %dth fibonacci  is %d", n,sum);
*/
    int a=1,b=1,fib=1;
    for (int i = 3; i < n; i++)
    {
        fib=a+b;
        printf("%4d",fib);
        a=b;
        b=fib;
    }

    

    

    return 0;
}