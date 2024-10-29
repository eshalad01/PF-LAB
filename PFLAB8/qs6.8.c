#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    int row,col;

    for (row=0;row<size;row++) {
        for (col=0;col<size;col++) {
            if (row==col || row==0 ||  col==0 || row==size-1|| col==size-1 || col==size-row-1) 
			{
                printf("* ");
            } else
		    {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
