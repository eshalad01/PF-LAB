#include <stdio.h>
#include <stdlib.h>

int main() {
    int nstudents, *numGrades;
    int **grades; 

    printf("Enter the number of students: ");
    scanf("%d", &nstudents);

    numGrades = (int *)malloc(nstudents * sizeof(int));
    if (numGrades == NULL) {
        printf("No Memory Allocation.\n");
        return 1;
    }
    grades = (int **)malloc(nstudents * sizeof(int *));
    if (grades == NULL) {
        printf("No Memory Allocation.\n");
        free(numGrades);
        return 1;
    }
    for (int i = 0; i < nstudents; i++) {
        printf("\nEnter the number of grades for student %d: ", i + 1);
        scanf("%d", &numGrades[i]);

        grades[i] = (int *)malloc(numGrades[i] * sizeof(int)); 
        if (grades[i] == NULL) {
            printf("No Memory Allocation.\n");
            for (int j = 0; j < i; j++) {
                free(grades[j]); 
            }
            free(grades);
            free(numGrades);
            return 1;
        }
        for (int j = 0; j < numGrades[i]; j++) {
            printf("Grade %d: ", j + 1); 
            scanf("%d", &grades[i][j]); 
        }
    }
    printf("\nGrades:\n");
    for (int i = 0; i < nstudents; i++) {
        printf("Student %d Grades: ", i + 1);
        for (int j = 0; j < numGrades[i]; j++) {
            printf("%d ", grades[i][j]); 
        }
        printf("\n");
    }
    for (int i = 0; i < nstudents; i++) {
        free(grades[i]);
    }
    free(grades);
    free(numGrades);

    return 0;
}

