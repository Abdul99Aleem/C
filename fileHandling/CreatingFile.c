#include<stdio.h>
int main ()
{
    FILE* ptr =fopen("aleem.txt", "w");
    char str[]="Hello World";
    fputs(str,ptr);
    fclose(ptr);
return 0;
}