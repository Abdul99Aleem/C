#include<stdio.h>
#include<limits.h>
int main ()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
        for (int i = 0; i <=7; i++)
    {
        if (max<arr[i] )
        {
           max = arr[i];
        }
        
    }
    printf("%d", smax);


return 0;
}