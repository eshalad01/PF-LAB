#include<stdio.h>
int main()
{
float perc;
char grade;
printf("Enter percentage:");
scanf(" %f", & perc);
grade=(perc>=90 && perc <=100)? 'A':
(perc>=80 && perc<=89)? 'B':
(perc>=70 && perc<=79)? 'C':
(perc>=60 && perc<=69)? 'D': 'F';
printf(" Grade: %c \n", grade);
return 0;
}
