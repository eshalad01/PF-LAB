#include <stdio.h>
int main() {
int n;
int arr[n];
printf("Enter number of rows:");
scanf("%d", &n); 
int i,j,k; 
    for (i=n;i>0;i--) {
        for (j=0;j<n-i;j++) {
            printf(" ");
        }
         for(k=i;k>0;k--)
        {
        printf(" %d",k);
}
        printf("\n");
    }

    for(i=2;i<=n;i++) {
        for(j=0;j<n-i;j++) {
            printf(" ");
        }
       for(k=i;k>0;k--)
        {
        printf(" %d",k);
}
     printf("\n");
    }
    return 0;
}
