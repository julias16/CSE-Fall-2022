#include <stdio.h>

int main()
{
    int N, M;

    // Input the dimensions of the 2D array
    printf("Enter the number of rows (N): ");
    scanf("%d", &N);
    printf("Enter the number of columns (M): ");
    scanf("%d", &M);

    int array[N][M];

    // Input elements for the 2D array
    printf("Enter elements for the %d x %d array:\n", N, M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int X;

    // Input the integer to search for
    printf("Enter the integer to search (X): ");
    scanf("%d", &X);

    int found = 0;

    // Search for X in the 2D array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] == X)
            {
                printf("Found at Row index = %d and Column index = %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        printf("Not Found\n");
    }

    return 0;
}

