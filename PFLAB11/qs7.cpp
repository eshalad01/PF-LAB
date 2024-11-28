#include <stdio.h>
#include <string.h>

struct Course {
    char courseID[10];
    char coursename[50];
    char instructorname[50];
    int credits;
};

struct Department {
    char departmentName[50];
    struct Course courses[10];
    int numcourses;
};

int main() {
    struct Department departments[10];
    int n=0;

    while (1) {
        printf("\nUniversity Course Enrollment System\n");
        printf("1. Add a Department\n");
        printf("2. Add a Course to a Department\n");
        printf("3. Display Department and Course Details\n");
        printf("4. Calculate Total Credits for a Department\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter department name: ");
                scanf("%s", departments[n].departmentName);
                departments[n].numcourses = 0;
                n++;
                printf("Department added successfully!\n");
                break;
            }
            case 2: {
                printf("Enter department name: ");
                char departmentName[50];
                scanf("%s", departmentName);
                for (int i = 0; i < n; i++) {
                    if (strcmp(departments[i].departmentName, departmentName) == 0) {
                        printf("Enter course ID: ");
                        scanf("%s", departments[i].courses[departments[i].numcourses].courseID);
                        printf("Enter course name: ");
                        scanf("%s", departments[i].courses[departments[i].numcourses].coursename);
                        printf("Enter instructor name: ");
                        scanf("%s", departments[i].courses[departments[i].numcourses].instructorname);
                        printf("Enter credits: ");
                        scanf("%d", &departments[i].courses[departments[i].numcourses].credits);
                        departments[i].numcourses++;
                        printf("Course added successfully!\n");
                        break;
                    }
                }
                break;
            }
            case 3: {
                for (int i = 0; i < n; i++) {
                    printf("Department Name: %s\n", departments[i].departmentName);
                    for (int j = 0; j < departments[i].numcourses; j++) {
                        printf("Course ID: %s\n", departments[i].courses[j].courseID);
                        printf("Course Name: %s\n", departments[i].courses[j].coursename);
                        printf("Instructor Name: %s\n", departments[i].courses[j].instructorname);
                        printf("Credits: %d\n\n", departments[i].courses[j].credits);
                    }
                }
                break;
            }
            case 4: {
                printf("Enter department name: ");
                char departmentName[50];
                scanf("%s", departmentName);
                for (int i = 0; i < n; i++) {
                    if (strcmp(departments[i].departmentName, departmentName) == 0) {
                        int totalCredits = 0;
                        for (int j = 0; j < departments[i].numcourses; j++) {
                            totalCredits += departments[i].courses[j].credits;
                        }
                        printf("Total credits for %s department: %d\n", departmentName, totalCredits);
                        break;
                    }
                }
                break;
            }
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
