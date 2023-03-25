// C program to find the second largest in an array. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], i, max1, max2;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max1 = arr[0];
    max2 = arr[1];
    if (max2 > max1)
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (i = 2; i < 10; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
            max2 = arr[i];
    }
    printf("Second largest number in the array is: %d", max2);
    return 0;
}
