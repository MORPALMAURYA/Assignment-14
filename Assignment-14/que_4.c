// C program to find the greatest number stored in an array of size 10:

#include <stdio.h>
int main()
{
    int arr[10], i, max;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Greatest number in the array is: %d", max);
    return 0;
}
