#include <stdio.h>
#include <stdlib.h>

int main() {
    int numRows, numCols;

    printf("Specify the number of rows: ");
    scanf("%d", &numRows);
    printf("Specify the number of columns: ");
    scanf("%d", &numCols);

    int **matrix = (int **)malloc(numRows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < numRows; i++) {
        matrix[i] = (int *)malloc(numCols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d.\n", i);
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return 1;
        }
    }

    printf("Input the elements for the matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("Value at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int targetRow, targetCol, newValue;
    printf("\nProvide the row and column to update (0-based index): ");
    scanf("%d %d", &targetRow, &targetCol);
    printf("Specify the new value: ");
    scanf("%d", &newValue);

    if (targetRow >= 0 && targetRow < numRows && targetCol >= 0 && targetCol < numCols) {
        matrix[targetRow][targetCol] = newValue;
    } else {
        printf("Invalid indices entered. Update not applied.\n");
    }

    printf("\nUpdated matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numRows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

