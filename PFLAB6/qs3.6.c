#include<stdio.h>
int main()
{
	int numb;
	
	do
	{
		printf("Enter a number:");
	scanf("%d", & numb);
	 if(numb<0)
	 { 
	 printf("no \n");
	 }
	}while (numb<0);
	printf("yes ~<_%d_>~", numb);
	return 0;
}
