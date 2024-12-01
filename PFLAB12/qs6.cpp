#include <stdio.h>
#include <stdlib.h>

int main() {
    int numElements;
    float *elements, maxElement;

    printf("How many numbers do you want to input (between 1 and 100)? ");
    scanf("%d", &numElements);

    if (numElements < 1 || numElements > 100) {
        printf("Error: Please choose a number within the valid range (1 to 100).\n");
        return 1;
    }

    elements = (float *)malloc(numElements * sizeof(float));
    if (elements == NULL) {
        printf("Error: Unable to allocate memory.\n");
        return 1;
    }

    printf("Input %d numbers:\n", numElements);
    for (int i = 0; i < numElements; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &elements[i]);
    }

    maxElement = elements[0];
    for (int i = 1; i < numElements; i++) {
        if (elements[i] > maxElement) {
            maxElement = elements[i];
        }
    }

    printf("The highest number is: %.2f\n", maxElement);

    free(elements);

    return 0;
}

