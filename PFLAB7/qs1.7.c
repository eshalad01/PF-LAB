#include<stdio.h>
int main()
{
	int num,i;
	int A[10]={2,6,3,1,9,6,4,11,20,15};
	printf("Enter integer to search:");
	scanf("%d", &num);
	for(i=0;i<10;i++)
	{
		if(A[i]==num)
		{ printf("%d found at index %d", num, i);
			return 0;}
	
	}

	printf("Number not found");

	return 0;
	
}

