#include<stdio.h>

 void shapes(int n)
 {
 	int i, j;
 	for(i=1;i<=2*n+1;i++)
	{
		for(j=1;j<=n+2;j++)
		{
			if(i==1 || i==2*n+1){
				if(j==n+2){
					printf("o");}
				else{
					printf(".  ");}
			}
			else if(i==2 || i==2*n)
			{
				if(j==n+2 || j==n+2-1){
					printf("o");}
				else{
					printf(".  ");}
			}
			else if(i==3 || i==2*n-1)
			{
				if(j==n+2 || j==n+2-1 || j==n){
					printf("o");}
				else{
					printf(".  ");}
			}
			else if(i==4 ||i==2*n-2)
			{
				if(j==n+2 || j==n+2-1 || j==n || j==n-1)
				{
					printf("o");
				}
				else{
					printf(".  ");}
			}
			else if(i==5 || i==2*n-3)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2){
					printf("o");}
				else
				{
					printf(".  ");
				}
			}
			else if(i==6 ||i==2*n-4)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3)
				{
					printf("o");
				}
				else
				{printf(".  ");}
			}
			else if(i==7 ||i==2*n-5)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3 || j==n-4)
				{printf("o");}
				else
				{
					printf(".  ");
				}
			}
			else if(i==8 ||i==2*n-6)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3 || j==n-4 || j==n-5)
				{
					printf("o");
				}
				else
				{
					printf(".  ");
				}
			}
			else if(i==9 || i==2*n-7)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3 || j==n-4 || j==n-5 || j==n-6)
				{
					printf("o");
				}
				else
				{
					printf(".  ");
				}
			}
			else if(i==10 || i==2*n-8)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3 || j==n-4 || j==n-5 || j==n-6 || j==n-7)
				{
					printf("o");
				}
				else
				{
					printf(".  ");
				}
			}
			else if(i==11)
			{
				if(j==n+2 || j==n+2-1 || j==n ||j==n-1 || j==n-2 || j==n-3 || j==n-4 || j==n-5 || j==n-6 || j==n-7 || j==n-8)
				{
					printf("o");
				}
				else
				{
					printf(".  ");
				}
			}
			else
			{
				printf(".  ");
			}
		}
		printf("\n");
	}
 }
 
 
 
 
 int main()
{
	int n;
	printf("Enter the number to find the rows: ");
	scanf("%d",&n);
	shapes(n);
	
	
}
