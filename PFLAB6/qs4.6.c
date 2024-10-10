#include<stdio.h>
int main()
{
	int numb,var=0;
	
	do
	{
		printf("Enter a number:");
	scanf("%d", & numb);
	var+=numb;
	printf("sum=%d \n", var);
	}while (numb!=0);
	printf("final sum=%d", var);
	return 0;
}
