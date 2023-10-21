//Write down a function that will take three integers as parameters and will return maximum
//of three.

#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maximum = maxOfThree(num1, num2, num3);
    printf("The maximum of the three integers is: %d\n", maximum);

    return 0;
}
