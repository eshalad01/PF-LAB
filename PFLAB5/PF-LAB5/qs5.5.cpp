#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d", &num);
	if((num>>1)<<1==num)
	printf(" %d is an even number\n", num);
	else
	printf(" %d is an odd number\n", num);
	return 0;
}
