#include<stdio.h>
int main()
{
int score;
printf("Enter the score=");
scanf("%d", & score);
     if (score<0 || score>100)
    {
    printf("Invalid input");
}
    else if (score>=90 && score<=100)
{
printf("Grade A");
}
    else if (score>=80 && score<=89)
{
printf("Grade B");
}
else if (score>=70 && score<=79)
{
printf("Grade C");
}
else if (score>=60 && score<=69)
{
printf("Grade D");
}
else
{
printf("Grade F");
}
return 0;
}

