
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;

    printf("Array elements:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
