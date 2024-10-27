#include<stdio.h>
int main ()
{
    FILE* ptr =fopen("aleem.txt", "r");
    char str[100000];
    if (fgets(str,10000000,ptr)!=NULL) printf("%s", str);
return 0;
}