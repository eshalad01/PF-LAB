#include<stdio.h>
int main()
{
	float tp;
	char memb;
	printf("Enter your member ship status:\n");
	printf("Y for yes and N for no\n");
	scanf(" %c", &memb);
    printf("Enter the total price(in $):");
    scanf("%f", &tp);
    (memb=='Y' && tp>=100)? printf("You are eligble for discount \n"):
    	printf("You are not eligble for discount \n");
    	return 0;
    }
