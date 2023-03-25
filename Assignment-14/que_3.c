// C program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10:

#include <stdio.h>
int main()
{
    int arr[10], i, even_sum = 0, odd_sum = 0;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }
    printf("Sum of even numbers in the array is: %d\n", even_sum);
    printf("Sum of odd numbers in the array is: %d", odd_sum);
    return 0;
}
