// C program to sort elements of an array of size 10:

#include <stdio.h>
int main()
{
    int arr[10], i, j, temp;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
