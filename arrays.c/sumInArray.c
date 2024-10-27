// #include <stdio.h>
// int main()
// {

//     int arr[5] = {1,
//                   2,
//                   3,
//                   4,
//                   5};
//     int prod = arr[0];
//     for (int i = 0; i <= 4; i++)
//     {
//         prod = prod + arr[i];
//     }

//     printf("%d", prod);

//     return 0;
// }
#include <stdio.h>
int main()
{

    int arr[100], size, i, sum = 0;

    scanf("%d", &size);
    printf("size\n");

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        sum = sum + arr[i];

    printf("%d", sum);

    return 0;
}
