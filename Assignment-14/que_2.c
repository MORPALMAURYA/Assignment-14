// C program to calculate the average of numbers stored in an array of size 10:

#include <stdio.h>
int main()
{
    int arr[10], i, sum = 0;
    float avg;
    printf("Enter 10 integer numbers: \n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
        sum += arr[i];
    avg = (float)sum / 10;
    printf("Average of numbers in the array is: %.2f", avg);
    return 0;
}
