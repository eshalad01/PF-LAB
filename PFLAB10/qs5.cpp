
#include<stdio.h>
void digit_sum(int n, int *sum) 
{
    if(n == 0)
    {
        return;
    }
    else
    {
        *sum += (n % 10); 
        n=n/10;
        digit_sum(n, sum); 
    }
}

int main()
{
    int num;
    int sum=0; 

    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &num);    
    digit_sum(num, &sum);
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

