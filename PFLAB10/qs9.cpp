#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[50];
	char dept[50];
	float salary;	
};
void add(struct employee info[], int n)
{
	for(int i=0;i<n;i++)
	{
 printf("\nEnter information for employee %d:\n", i+1);
 printf("id:");
 scanf("%d", &info[i].id);
 printf("name:");
 scanf("%s", info[i].name);
 printf("department:");
 scanf("%s", info[i].dept);
 printf("salary:");
 scanf("%f", &info[i].salary);
 printf("\n\n");
 } 
 return;
}
void display(struct employee info[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nDetails of Employees %d\n", i+1);
		printf("id: %d \n", info[i].id);
		printf("name: %s \n", info[i].name);
		printf("department: %s \n", info[i].dept);
		printf("salary: %.2f \n", info[i].salary);
	}
	printf("\n\n\n");
	 return;
}



int main() {
	int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee info[n];
    add( info, n);
    	display(info, n);
    
}


