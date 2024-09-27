#include<stdio.h>
int main()
{
	int a,count=0;
	printf("Enter the number(less than 15)=");
	scanf("%d", &a);
	if (a & 1){
	count +=1; }
	if (a & 2){
	count +=1; }
	if (a & 3){
	count +=1; }
	if (a & 4){
	count +=1; }
	printf("The number of 1s in the binary representation is= %d", count);
	return 0;
}
