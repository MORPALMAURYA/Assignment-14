// C program to find the smallest number stored in an array of size 10:
#include <stdio.h>
int main()
{
    int arr[10], i, min;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Smallest number in the array is: %d", min);
    return 0;
}
