#include <stdio.h>

void printArray(int arr[], int size, int index) {
    if (index==size) {
        return;
    }
    printf("%d ", arr[index]);
    printArray(arr, size, index+1);
}

int main() {
	int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
     for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    printArray(arr, n, 0);
    return 0;
}
