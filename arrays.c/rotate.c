#include <stdio.h>
void reverse(int arr[])
{
    int i = 0;
    int j = 6;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
//  steps : k%n
// rev 0,n
// rev 0,k-1
// rev k,n-1

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n=7;
    int k=3;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}