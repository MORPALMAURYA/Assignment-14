// C program to copy the elements of one array into another array. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], i, n;
    printf("Enter number of elements (max. 10): ");
    scanf("%d", &n);
    printf("Enter %d integer numbers for array 1: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for (i = 0; i < n; i++)
        arr2[i] = arr1[i];
    printf("Array 1: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\nArray 2: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    return 0;
}
