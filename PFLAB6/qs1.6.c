#include<stdio.h>
int main()
{
	int numb, i;
	int fact=1;
	printf("Enter a postive numner:");
	scanf("%d", &numb);
	if(numb<0)
	{
		printf("You entered an invalid number.");
	}
     else
     {
     	  for(i=1;i<=numb;i++)
	  fact*=i;
	  printf("the factorial of %d is %d", numb, fact);
	 }
	 return 0;
}
