// program to calculate the sum of numbers stored in an array of size 10

#include <stdio.h>
int main()
{
    int arr[10], i, sum = 0;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
        sum += arr[i];
    printf("Sum of numbers in the array is: %d", sum);
    return 0;
}
