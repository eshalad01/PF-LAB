#include<stdio.h>
int main()
{
	int size=10,i;
	int A[size];
	int B[size];
	for(i=0;i<size;i++)
	{
		printf("Enter element %d of array:", i+1);
		scanf("%d", &A[i]);
	}

	printf("Before: \n");
		printf("{");
	for(i=0;i<size;i++)
	{
		printf("%d", A[i]);
		if(i<9)
		printf(",");
	}
		printf("}");
	printf("\n");
	
    for(i=0;i<size-1;i++){
		B[i]= A[i+1];
	}
	B[9]=A[0];

	printf(" After: \n");
		printf("{");
	for(i=0;i<size;i++)
	{
	printf("%d", B[i]);	
	if(i<9)
	printf(",");
		
	}
		printf("}");
	
	return 0;
}

