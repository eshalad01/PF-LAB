#include<stdio.h>
int main()
{
	int i,max=20;
int num[max];
for(i=0; i<max; i++){
printf("Enter number %d= ", i+1);
scanf("%d" , & num[i]);
}
printf("Array:\n");
printf("{");
	for(i=0;i<max;i++)
	{
		printf("%d", num[i]);
		if(i<max-1)
		printf(",");
	}
		printf("}");
	printf("\n");
printf(" In reverse order: \n");
printf("{");
for(i=max-1;i>=0;i--)
{
printf("%d" , num[i]);
if(i>0)
{printf(",");}
}
printf("}");

return 0;

}

