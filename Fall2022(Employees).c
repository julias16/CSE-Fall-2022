#include <stdio.h>

// Define the structure for employee
struct employee
{
    int employeeID;
    double salary;
    int age;
};

int main()
{
    int N;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    // Declare an array of employee structures
    struct employee employees[N];

    // Input employee information
    for (int i = 0; i < N; i++)
    {
        printf("Enter Employee %d's information:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    double maxSalary = 0.0;
    int atLeast40 = 0;

    for (int i = 0; i < N; i++)
    {
        if (employees[i].age >= 40)
        {
            if (employees[i].salary > maxSalary)
            {
                maxSalary = employees[i].salary;
            }
            atLeast40++;
        }
    }

    // Display the maximum salary and the size of the "employee" structure
    printf("Maximum salary among employees at least 40 years old: $%.2lf\n", maxSalary);
    printf("Size of the 'employee' structure: %lu bytes\n", sizeof(struct employee));

    return 0;
}

