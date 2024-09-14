#include<stdio.h>
int main()
{
	int hour;
	printf("Enter the hour(0-23)=");
	scanf("%d", & hour);
	if (hour>=6 && hour<12){
		printf("Good Morning \n");
	}
	else if (hour>=12 && hour<18){
     	printf("Good Afternoon \n");
    }
    else if (hour>=18 && hour<24){
    	printf("Good Evening \n");
	}
	else if(hour>=0 && hour<=5){
		printf("Good Night \n");
	}
    else
    printf("Wrong input");
    return 0;
}
