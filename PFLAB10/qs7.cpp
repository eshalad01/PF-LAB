#include <stdio.h>

void bubblesort(int arr[], int n) {
    if (n==1) {
        return;
    }
    for (int i=0; i<n-1; i++) {
        if (arr[i]> arr[i+1]) {
            int temp=arr[i];
            arr[i]= arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubblesort(arr,n-1);
}

void print(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: \n");
    print(arr, n);
    
    bubblesort(arr, n);
    
    printf("Sorted array: \n");
    print(arr, n);
    
    return 0;
}

