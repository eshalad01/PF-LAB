#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    printf("Enter scores of 3 activities of 3 participants:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Participant %d, Activity %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
             colSum += matrix[j][i];
        }
        printf("participant %d score sum: %d\n ", i + 1, rowSum);
        printf("activity %d overall score: %d\n", i + 1, colSum);
    }

    return 0;
}
