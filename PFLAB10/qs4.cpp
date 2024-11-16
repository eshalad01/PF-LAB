#include<stdio.h>
#include<string.h>
struct travelpackages{
	char name[30];
	char destination[30];
	int duration;
	float cost;
	int seats;	
};

void display(struct travelpackages info[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nDetails of package %d\n", i+1);
		printf("name: %s \n", info[i].name);
		printf("destination: %s \n", info[i].destination);
		printf("duration: %d \n", info[i].duration);
		printf("cost: %.2f \n", info[i].cost);
		printf("seats available: %d \n", info[i].seats);
	}
	printf("\n\n\n");
	 return;
}
 
 void book(struct travelpackages info[], int n)
 {
 	int option;
 	printf("Enter the package number(1-%d) you would like to book: ", n);
 	scanf("%d", &option );
 	
 	if( option<1 || option >n)
 	{
 		printf("Invalid package number.Retry..\n");
 		return;
	 }
	 int j=n-1;
	 if(info[j].seats>0)
	 {
	 	info[j].seats--;
	 	printf("Booking completed for package %d\n", option);
	 }
	 else{
	 	printf("No seats available for package %d\n", option);
	 }
  } 
int main()
{
	int n;
	printf("Enter the total number of packages to be defined:");
	scanf(" %d", &n);
	struct travelpackages info[n];
	for(int i=0; i<n;i++)
	{
		printf("\n Enter details:\n");
		printf("Enter package name: ");
		scanf("%s", info[i].name);
		printf("Enter package destination:");
		scanf("%s", info[i].destination);
		printf("Enter package duration:");
		scanf("%d", &info[i].duration);
		printf("Enter package cost:");
		scanf("%f", &info[i].cost);
		printf("Enter package seats available:");
		scanf("%d", &info[i].seats);
		
		
	}
	
	display(info, n);
	int booking=1;
	
	while(booking==1)
	{
		book(info, n);
		printf("Book another package? press 1 to continue and 2 to exit:    ");
		scanf("%d", &booking);
	}
	printf("Booking complete");
	return 0;
	
	
	
}










