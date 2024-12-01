#include <stdio.h>
#include <stdlib.h>

void insertNumber(float **array, int *currentSize, int *currentCapacity, float value) {
    if (*currentSize==*currentCapacity) {
        *currentCapacity *=2; 
        *array=(float *)realloc(*array, (*currentCapacity) * sizeof(float));
        if (*array==NULL) {
            printf("Memory reallocation failed. Exiting.\n");
            exit(1);
        }
    }
    (*array)[(*currentSize)++]=value;
}

void showNumbers(float *array, int size) {
    printf("Current numbers: ");
    for (int i=0; i<size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

void deleteLastNumber(float **array, int *currentSize, int *currentCapacity) {
    if (*currentSize>0) {
        (*currentSize)--;
        if (*currentSize<*currentCapacity/4) {
            *currentCapacity/=2; 
            *array=(float *)realloc(*array, (*currentCapacity) * sizeof(float));
            if (*array==NULL) {
                printf("Failed to reallocate memory during shrinking. Exiting.\n");
                exit(1);
            }
        }
    } else {
        printf("The array is empty. Nothing to remove.\n");
    }
}

int main() {
    int initialCapacity=4; 
    int size=0; 
    int capacity=initialCapacity; 
    float *numbers=(float *)malloc(capacity * sizeof(float));
    if (numbers==NULL) {
        printf("Failed to allocate initial memory. Exiting.\n");
        return 1;
    }

    int option; 
    do {
        printf("\nOptions:\n");
        printf("1. Insert a number\n");
        printf("2. View all numbers\n");
        printf("3. Remove the last number\n");
        printf("4. Quit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                float inputValue;
                printf("Enter a floating-point number to add: ");
                scanf("%f", &inputValue);
                insertNumber(&numbers, &size, &capacity, inputValue);
                break;
            }
            case 2:
                showNumbers(numbers, size);
                break;
            case 3:
                deleteLastNumber(&numbers, &size, &capacity);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (option!=4);

    free(numbers); 
    return 0;
}

