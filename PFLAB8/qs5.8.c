#include <stdio.h>

int main() {
    int matrix[4][4];
    int i,j,k;
    for(j=0;j<4;j++) {
        printf("Enter scores for Team %d:\n", j+1);
        for (i=0;i<4;i++)
		 {
            printf("Round %d: ",i+1);
            scanf("%d", &matrix[i][j]);
         }
    }
 
      for (j=0;j<4;j++) 
	  { 
        for(i=0;i<3;i++)
		 { 
            for(k=i+1;k<4;k++) 
			{
                  if(matrix[i][j]>matrix[k][j])
				   { 
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[k][j];
                    matrix[k][j]=temp;
                   }
            }
        }
    }
    printf("\nTeam performance in ascending order:\n");
    for (i=0;i<4;i++)
	    {
        for(j=0;j<4;j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


