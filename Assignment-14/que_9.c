// C program in to read n number of values in an array and display it in reverse order. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], i, n;
    printf("Enter number of elements (max. 10): ");
    scanf("%d", &n);
    printf("Enter %d integer numbers: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}
