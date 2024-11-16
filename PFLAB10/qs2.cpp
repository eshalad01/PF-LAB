#include<stdio.h>

void percent_split(int n, int percent)
{
	float ans=(n)*(percent/100.0);
	if(percent>100)
	{return;}
	else
	{
		printf("%d Percent = %.2f\n", percent, ans);
		percent++;
		percent_split(n, percent);
		
	}
	return;
}


int main()
{
	int value;
	int percentage=1;
	printf("Enter a value to split in percentage:");
	scanf("%d",  &value);
	percent_split(value, percentage);
}
