// C program to find the second smallest number in an array. Take array values from the user.

#include <stdio.h>
int main()
{
    int arr[10], i, min1, min2;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    min1 = arr[0];
    min2 = arr[1];
    if (min2 < min1)
    {
        min1 = arr[1];
        min2 = arr[0];
    }
    for (i = 2; i < 10; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
            min2 = arr[i];
    }
    printf("Second smallest number in the array is: %d", min2);
    return 0;
}
