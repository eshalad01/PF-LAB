#include <stdio.h>

void pattern(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", j);
        }
        for (int j=i-1; j>=1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter a number: ");
    scanf("%d", &size); 
    pattern(size);
    return 0;
}

