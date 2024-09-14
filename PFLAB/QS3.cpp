#include<stdio.h>
int main()
{
	float orgcost, discount, costsaved, finalcost;
	printf("Enter the original cost=");
	scanf("%f", & orgcost);
	if (orgcost<1500){
		discount= 0.07;
	}
	else if ( orgcost>=1500 && orgcost<=3000){
		discount=0.12;
	}
	else if(orgcost>3000 && orgcost<=5000){
		discount=0.22;
	}
	else {
		discount=0.30;
	}
	costsaved=orgcost*discount;
	finalcost=orgcost-costsaved;
	
	printf("The original amount was %.2f \n" , orgcost);
	printf("Amount saved is %.2f\n", costsaved);
	printf("Discounted amount is %.2f\n", finalcost);
	return 0;
	}
