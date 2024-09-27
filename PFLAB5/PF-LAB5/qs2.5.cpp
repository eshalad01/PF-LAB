#include<stdio.h>
int main()
{
int a1,a2,a3;
int sum;
printf(" Enter angle 1:");
scanf("%d", & a1);
printf(" Enter angle 2:");
scanf("%d", & a2);
printf(" Enter angle 3:");
scanf("%d", & a3);
if( a1<=0 || a2<=0 || a3<=0)
 printf(" INVALID INPUT");
else
 sum=a1+a2+a3;
   if(sum=180)
   printf("The angles are valid and form a triangle");
   return 0;
}
