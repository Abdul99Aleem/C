#include<stdio.h>
int main(){
    int x;
    printf("Enter Number : ");
    scanf("%d", x);

    if (x%5==0){
    
        printf("The number is divisible By 5.");
    }
    else{
        printf("The number is not divisible By 5.");
    }

    return 0;

}