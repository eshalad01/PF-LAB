#include<stdio.h>

void order(int b, int n, int w)
{
	if(n<b )
	{
		printf("Check the Order:     too few nuts\n");
	}
	else if(w<2*b)
	{
		printf("Check the Order:     too few washers\n");
	}
	else if(n<b  && w<2*b)
	{
		printf("Check the Order:    too few nuts and too few washers\n");
	}
	else
	{
		printf("order is ok\n");
	}
	return;
}
int main()
{
	int b,n,w;
	int total;
	printf("Number of bolts:          ");
	scanf("%d", &b);
    printf("Number of nutts:          ");
	scanf("%d", &n);	
	printf("Number of washers:        ");
	scanf("%d", &w);
	printf("\n");
	order(b,n,w);
	total=(5*b)+(3*n)+(1*w);
	printf("Total cost:         %d", total);
}
