#include<stdio.h>
int main()
{  
	int numb,i;
	printf("Enter a number:");
	scanf("%d", & numb);
	if(numb>1)
    {
			for(i=2;i*i<=numb;i++)
		{
		 if(numb%i==0)
			{
			printf("The number %d is not prime \n", numb);
			return 0;
			}	
		 }
	    printf("the number %d is prime", numb);
			
	}
	else
	{
		printf("The number %d is not prime", numb);
	}
				
					return 0;
}
			
