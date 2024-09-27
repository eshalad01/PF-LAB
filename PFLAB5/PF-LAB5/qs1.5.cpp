#include<stdio.h>
int main()
{
int age;
char ctzn ;
printf("Enter your citizenship(P if Pakistani else N)\n");
scanf(" %c", &ctzn);
     if   (ctzn=='P' ){
   printf("Enter your age:");
scanf(" %d", &age);
  if(age>=18) {
  printf("You are eligble to vote as a citizen");}
  else{
  printf("You are not eligble to vote due to age");}
}
else
printf(" You are not eligble to vote due to no citizenship");
return 0;

}

