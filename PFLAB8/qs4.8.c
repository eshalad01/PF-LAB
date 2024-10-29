#include<stdio.h>
int main ()
{
	int m,n;


printf("Enter the values for (mxn):\n");
printf("m:");
scanf("%d", &m);
printf("n:");
scanf("%d", &n);
int a[m][n], b[m][n];
int sum[m][n];
int i,j;
printf("Enter elements for matrice 1:\n");
for(i=0;i<m;i++)
 {
	for(j=0;j<n;j++)
	{
		printf("(%dx%d):", i+1,j+1);
		scanf("%d", &a[i][j]);
	}
 }
 printf("Enter element for matrice 2:\n");
for(i=0;i<m;i++)
 {
	for(j=0;j<n;j++)
	{
		printf("(%dx%d):", i+1,j+1);
		scanf("%d", &b[i][j]);
	}
}
 
 for(i=0;i<m;i++)
 {
 	for ( j=0;j<n;j++)
 	{
 		sum[i][j]=a[i][j]+b[i][j];
 	
	}
 }

printf("\nSum of the matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
return 0;
}
