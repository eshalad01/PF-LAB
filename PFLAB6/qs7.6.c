#include<stdio.h>
int main()
{
	int num, checknum, remainder, sum=0;
	printf("Enter a number =");
	scanf("%d", &num);
	checknum=num;
	while( checknum!=0)
	{
		remainder=checknum%10;
		sum+=(remainder)*(remainder)*(remainder);
		checknum/=10;
	}
	if(sum==num)
	{
		printf("The sum of cube of digits =  The number \n Therefore, it is an Armstrong Number");
		
	}
	else{
		printf("The sum of cube of digits is not equal to The number \n Therefore, it is not an Armstrong Number");
	}
	return 0;
	
	}
