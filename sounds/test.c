#include<stdio.h>
int main ()
{   
    int a,b,c;
    printf("\nEnter two numbers-");
    scanf("%d %d",&a,&b);
    c=a&b;
    printf("\nAND OPERATOR-%d",c);
    c=a|b;
    printf("\nOR OPERATOR-%d",c);
    c=a^b;
    printf("\nEXOR OPERATOR-%d",c);
    c=a<<b;
    printf("\nLEFT SHITF-%d",c);
    c=a>>b;
    printf("\nRIGHT SHIFT-%d",c);
    return 0;
}