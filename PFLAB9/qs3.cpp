#include<stdio.h>
#include<string.h>
int main()
{
	char username[]="admin";
	char password[]="1234";
	char user[100],pass[100];
	printf("Enter username:");
	scanf("%s", user);
	printf("Enter password:");
	scanf("%s", pass);
	int value_user=strcmp(username, user);
	int value_pass=strcmp(password, pass);
	if(value_user==0 && value_pass==0)
	{
		printf("\n Access granted.");
		
	}
	else{
		printf("\nAccess denied.");
	}
}
