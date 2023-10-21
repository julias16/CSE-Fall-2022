#include <stdio.h>
#include <string.h>

// Define the structure for a movie star
struct star
{
    int starID;
    char name[100];
    int age;
};

int main()
{
    int N;

    // Input the number of movie stars
    printf("Enter the number of movie stars: ");
    scanf("%d", &N);

    // Declare an array of star structures
    struct star stars[N];

    // Input movie star information
    for (int i = 0; i < N; i++)
    {
        printf("Enter Movie Star %d's information:\n", i + 1);
        printf("Star ID: ");
        scanf("%d", &stars[i].starID);
        printf("Name: ");
        scanf("%s", stars[i].name);
        printf("Age: ");
        scanf("%d", &stars[i].age);
    }

    int youngestAge = stars[0].age;

    for (int i = 1; i < N; i++)
    {
        if (stars[i].age < youngestAge)
        {
            youngestAge = stars[i].age;
        }
    }

    // Display the age of the youngest movie star and the size of the "star" structure
    printf("Age of the youngest movie star: %d years\n", youngestAge);
    printf("Size of the 'star' structure: %lu bytes\n", sizeof(struct star));

    return 0;
}

