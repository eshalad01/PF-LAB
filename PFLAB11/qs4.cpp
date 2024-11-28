#include <stdio.h>
#include <string.h>
typedef struct {
    char name[100];
    char dateOfBirth[10];
    int employeeID;
    char department[100];
    float salary;
} Employee;

//  add
void addEmployee(Employee employees[], int *numEmployees) {
    if (*numEmployees < 100) {
        printf("Enter employee name: ");
        fgets(employees[*numEmployees].name, sizeof(employees[*numEmployees].name), stdin);
        employees[*numEmployees].name[strcspn(employees[*numEmployees].name, "\n")] = 0;

        printf("Enter employee date of birth (DD/MM/YYYY): ");
        fgets(employees[*numEmployees].dateOfBirth, sizeof(employees[*numEmployees].dateOfBirth), stdin);
        employees[*numEmployees].dateOfBirth[strcspn(employees[*numEmployees].dateOfBirth, "\n")] = 0;

         printf("Enter employee ID: ");
        while (scanf("%d", &employees[*numEmployees].employeeID) != 1) { 
            printf("Invalid input. Please enter a valid employee ID: ");
            while (getchar() != '\n'); 
        }
        getchar(); 

        printf("Enter employee department: ");
        fgets(employees[*numEmployees].department, sizeof(employees[*numEmployees].department), stdin);
        employees[*numEmployees].department[strcspn(employees[*numEmployees].department, "\n")] = 0;

        printf("Enter employee salary: ");
        scanf("%f", &employees[*numEmployees].salary);
        getchar();

        (*numEmployees)++;
        printf("Employee added successfully!\n");
    } else {
        printf("Maximum number of employees reached!\n");
    }
}

//  delete
void deleteEmployee(Employee employees[], int *numEmployees) {
    int employeeID;
    printf("Enter employee ID to delete: ");
    scanf("%d", &employeeID);
    getchar();

    for (int i = 0; i < *numEmployees; i++) {
        if (employees[i].employeeID == employeeID) {
            for (int j = i; j < *numEmployees - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*numEmployees)--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found!\n");
}

// display
void displayEmployees(Employee employees[], int numEmployees) {
    if (numEmployees == 0) {
        printf("No employees to display!\n");
    } else {
        printf("Employee List:\n");
        for (int i = 0; i < numEmployees; i++) {
            printf("Name: %s\n", employees[i].name);
            printf("Date of Birth: %s\n", employees[i].dateOfBirth);
            printf("Employee ID: %d\n", employees[i].employeeID);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n\n", employees[i].salary);
        }
    }
}

int main() {
    Employee employees[100];
    int numEmployees = 0;

    while (1) {
        printf("Employee Management System\n");
        printf("1. Add an Employee\n");
        printf("2. Delete an Employee\n");
        printf("3. Display All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addEmployee(employees, &numEmployees);
                break;
            case 2:
                deleteEmployee(employees, &numEmployees);
                break;
            case 3:
                displayEmployees(employees, numEmployees);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
