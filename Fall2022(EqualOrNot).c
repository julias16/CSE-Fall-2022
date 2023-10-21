//Write down a function that compares two strings and returns 1 if they are the same and 0
//otherwise.

#include <stdio.h>
#include <string.h>

int areStringsEqual( char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    if (areStringsEqual(str1, str2))
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
    return 0;
}
