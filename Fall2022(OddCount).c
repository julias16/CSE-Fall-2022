//Write down a program that counts and prints the number of odd numbers in a given array.

#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Input: Number of elements: ");
    scanf("%d", &n);

    int array[n];

    // Input array elements
    printf("Input: Input array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int oddCount = 0;

    // Count and print the number of odd numbers
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    printf("Output: Number of odd numbers: %d\n", oddCount);

    return 0;
}

