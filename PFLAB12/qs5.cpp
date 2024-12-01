#include <stdio.h>
#include <stdlib.h>

// Function to display the elements of the array
void displayArray(int *arr, int len) {
    printf("Current Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int testCases;
    printf("Enter the number of test cases: ");
    scanf("%d", &testCases);

    while (testCases--) {
        int numElements;
        printf("\nEnter the number of elements in the array: ");
        scanf("%d", &numElements);

        int *arr = (int *)malloc(numElements * sizeof(int));
        if (arr == NULL) {
            printf("Failed to allocate memory.\n");
            return 1;
        }

        printf("Enter the elements of the array:\n");
        for (int i = 0; i < numElements; i++) {
            scanf("%d", &arr[i]);
        }

        char opType;
        printf("\nEnter operation ('I' for insertion, 'D' for deletion): ");
        scanf(" %c", &opType);

        if (opType == 'I') {
            int index, value;
            printf("Enter the position (0-based) and value to insert: ");
            scanf("%d %d", &index, &value);

            arr = (int *)realloc(arr, (numElements + 1) * sizeof(int));
            if (arr == NULL) {
                printf("Failed to reallocate memory.\n");
                return 1;
            }

            for (int i = numElements; i > index; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            numElements++; // Increment the number of elements
        } 
        else if (opType == 'D') {
            int index;
            printf("Enter the position (0-based) to delete: ");
            scanf("%d", &index);

            for (int i = index; i < numElements - 1; i++) {
                arr[i] = arr[i + 1];
            }
            numElements--; // Decrement the number of elements

            arr = (int *)realloc(arr, numElements * sizeof(int));
            if (numElements > 0 && arr == NULL) {
                printf("Failed to reallocate memory.\n");
                return 1;
            }
        } 
        else {
            printf("Invalid operation. Please try again.\n");
        }

        // Display the modified array
        displayArray(arr, numElements);

        // Free allocated memory
        free(arr);
    }

    return 0;
}

