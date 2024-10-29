#include <stdio.h>

int main() {
    int grades[4][4];
    int i,j;
    printf("Enter grades of 4 students for 4 subjects:\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("Student %d, Subject %d: ", i+1, j+1);
            scanf("%d", &grades[i][j]);
           
            if(grades[i][j]<0) {
                grades[i][j]=0;
            }
        }
    }
    printf("\nUpdated Grades Matrix:\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    return 0;
}
