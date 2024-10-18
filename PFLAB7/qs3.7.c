#include<stdio.h>
int main()
{
	int i;
	int A[12];
    int B[6];
	 printf("Enter 12 elements:\n");
    for (i = 0; i < 12; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 6; i++) {
        B[i] = A[2 * i] + A[2 * i + 1];
    }
    printf("Input array: {");
    for ( i = 0; i < 12; i++) {
        printf("%d", A[i]);
        if (i < 11) {
            printf(",");
        }
    }
    printf("}\n");
    printf("Pair Sum array: {");
    for ( i = 0; i < 6; i++) {
        printf("%d", B[i]);
        if (i < 5) {
            printf(",");
        }
    }
    printf("}\n");
    return 0;
}

