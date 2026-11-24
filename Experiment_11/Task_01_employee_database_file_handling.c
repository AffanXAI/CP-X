/*
 * Experiment 11 - Task 1
 * Aim: Maintain a simple employee database using file handling.
 *
 * Features: add an employee (ID, name, designation, salary), display all
 * employees, update an employee's designation and salary. The data is saved in the text file
 * "employees.txt", so it is still there the next time you run the
 * program.
 *
 * WHERE IS THE FILE CREATED?
 * "employees.txt" is created in the CURRENT WORKING DIRECTORY, i.e. the
 * folder from which you run the program. If you run ./employee_database
 * from inside the Experiment_11 folder, the file appears in Experiment_11.
 *
 * Each line of the file is:  id|name|designation|salary
 */
#include <stdio.h>
#include <string.h>

#define FILE_NAME "employees.txt"
#define MAX_EMPLOYEES 100

struct employee
{
    int id;
    char name[50];
    char designation[50];
    float salary;
};

// Reads all employees from the file into the array; returns how many were read
int loadEmployees(struct employee list[])
{
    FILE *file = fopen(FILE_NAME, "r");
    int count = 0;

    if (file == NULL)            // file does not exist yet (no employees saved)
    {
        return 0;
    }

    while (count < MAX_EMPLOYEES &&
           fscanf(file, "%d|%49[^|]|%49[^|]|%f\n", &list[count].id, list[count].name, list[count].designation, &list[count].salary) == 4)
    {
        count++;
    }

    fclose(file);
    return count;
}

// Writes all employees from the array to the file (overwrites the old content)
void saveEmployees(struct employee list[], int count)
{
    FILE *file = fopen(FILE_NAME, "w");
    int i;

    if (file == NULL)
    {
        printf("Error: could not open the file for writing.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        fprintf(file, "%d|%s|%s|%.2f\n", list[i].id, list[i].name, list[i].designation, list[i].salary);
    }

    fclose(file);
}

void addEmployee()
{
    struct employee list[MAX_EMPLOYEES];
    int count = loadEmployees(list);
    int i;
    struct employee newEmployee;

    if (count >= MAX_EMPLOYEES)
    {
        printf("Database is full!\n");
        return;
    }

    printf("Enter employee ID     : ");
    scanf("%d", &newEmployee.id);

    // Do not allow duplicate IDs
    for (i = 0; i < count; i++)
    {
        if (list[i].id == newEmployee.id)
        {
            printf("An employee with this ID already exists.\n");
            return;
        }
    }

    printf("Enter employee name   : ");
    scanf(" %49[^|\n]", newEmployee.name);
    printf("Enter designation     : ");
    scanf(" %49[^|\n]", newEmployee.designation);
    printf("Enter employee salary : ");
    scanf("%f", &newEmployee.salary);

    list[count] = newEmployee;
    count++;
    saveEmployees(list, count);
    printf("Employee added and saved to file.\n");
}

void displayEmployees()
{
    struct employee list[MAX_EMPLOYEES];
    int count = loadEmployees(list);
    int i;

    if (count == 0)
    {
        printf("No employee records found.\n");
        return;
    }

    printf("\n%-6s %-22s %-20s %-10s\n", "ID", "Name", "Designation", "Salary");
    printf("------------------------------------------------------------\n");
    for (i = 0; i < count; i++)
    {
        printf("%-6d %-22s %-20s %-10.2f\n", list[i].id, list[i].name, list[i].designation, list[i].salary);
    }
}

void updateEmployee()
{
    struct employee list[MAX_EMPLOYEES];
    int count = loadEmployees(list);
    int id, i, found = 0;

    printf("Enter the ID of the employee to update: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (list[i].id == id)
        {
            printf("Current designation of %s is %s, salary %.2f\n",
                   list[i].name, list[i].designation, list[i].salary);
            printf("Enter the new designation: ");
            scanf(" %49[^|\n]", list[i].designation);
            printf("Enter the new salary: ");
            scanf("%f", &list[i].salary);
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        saveEmployees(list, count);
        printf("Employee updated and saved to file.\n");
    }
    else
    {
        printf("Employee with ID %d not found.\n", id);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== EMPLOYEE DATABASE =====\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Update employee designation and salary\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Program will exit.\n");
            break;
        }

        switch (choice)
        {
            case 1: addEmployee();      break;
            case 2: displayEmployees(); break;
            case 3: updateEmployee();   break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice! Please select 1 to 4.\n");
        }
    } while (choice != 4);

    return 0;
}
