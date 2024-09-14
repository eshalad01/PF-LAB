#include<stdio.h>
int main()
{
	int units;
	float bill,surcharge,fbill;
	printf("Enter the unit charges=");
	scanf("%d",& units);
	if (units>= 0 && units<=30) {
	bill= units * 0.60;
	printf("Bill (without any surcharge) for first 30 units is=Rs %f  \n",  bill);
    }
	else if (units>30 && units<=110) {          
	bill= (30 * 0.60) + (units-30) * 0.85;
	printf("Bill (without any surcharge) upto 110 units is=Rs %f  \n",  bill);
    }
    else if (units> 110  && units<=210) {          
	bill= (30 * 0.60) + (80 * 0.85)+ (units -110) * 1.30 ;
	printf("Bill (without any surcharge) upto 210 units is=Rs %f  \n",  bill);
    }
    else {          
	bill= (30 * 0.60) + (80 * 0.85)+ (100* 1.30 ) + (units-210) *1.60 ;
	printf("Bill (without any surcharge) upto 210 units is=Rs %f  \n",  bill);
    }
    
    surcharge= bill * 0.15 ;
    fbill= bill + surcharge;
    printf("Your final bill(including surcharge) is=%f", fbill);
    return 0;
}
