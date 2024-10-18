#include<stdio.h>
int main()
{
int sum;
int i;
int num[15];
for(i = 1; i<=15; i++){
printf("Enter number %d=", i);
scanf("%d" , & num[i]);
}
for(i = 1; i<=15; i++){
sum = sum + num[i];}

printf(" The sum of 15 numbers in the array is %d" , sum);
return 0;
}
