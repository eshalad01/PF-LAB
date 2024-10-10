#include<stdio.h>
int main()
{
	int numb, i=2;
	printf("Enter a number:");
	scanf("%d", & numb);
	printf("The even number between 1 and %d are: \n ", numb);
	if(numb>=1)
	{
	while(i<=numb)
	{
	printf(" %d", i);
	i+=2;
    }
    }
    else
    printf("Error!Inavlid input");
	return 0;
}
