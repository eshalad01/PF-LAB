#include <stdio.h>
#include <stdlib.h>

int main() {
    int testCases;
    printf("Enter the number of test cases: ");
    scanf("%d", &testCases);

    while (testCases--) {
        int sequenceLength;
        printf("\nEnter the size of the sequence: ");
        scanf("%d", &sequenceLength);

        int *sequence = (int *)malloc(sequenceLength * sizeof(int));
        if (sequence == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        int countArray[10001] = {0}; // Array to track occurrences

        printf("Enter the sequence elements:\n");
        for (int i = 0; i < sequenceLength; i++) {
            scanf("%d", &sequence[i]);
            countArray[sequence[i]]++; // Increment count for the element
        }

        int highestFrequency = 0, smallestElement = 10001;
        for (int i = 1; i < 10001; i++) {
            if (countArray[i] > highestFrequency || 
                (countArray[i] == highestFrequency && i < smallestElement)) {
                highestFrequency = countArray[i];
                smallestElement = i;
            }
        }

        printf("Element with the highest frequency: %d\n", smallestElement);

        free(sequence); // Release allocated memory
    }

    return 0;
}

