#include <stdio.h>
#include <stdlib.h>

int main() {
    int numPoints;
    float *fees, totalProfit = 0.0;

    printf("Enter the total number of points in the facility: ");
    scanf("%d", &numPoints);

    if (numPoints <= 0) {
        printf("The number of points must be greater than 0.\n");
        return 1;
    }

    fees = (float *)malloc(numPoints * sizeof(float));
    if (fees == NULL) {
        printf("Failed to allocate memory.\n");
        return 1;
    }

    for (int i = 0; i < numPoints; i++) {
        printf("Enter fee for point %d: $", i + 1);
        scanf("%f", &fees[i]);

        while (fees[i] < 0) {
            printf("Fee cannot be negative. Please re-enter fee for point %d: $", i + 1);
            scanf("%f", &fees[i]);
        }

        totalProfit += fees[i];
    }

    printf("\nTotal Profit for the facility: $%.2f\n", totalProfit);

    free(fees);

    return 0;
}

