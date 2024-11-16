#include<stdio.h>
#include<string.h>
int reverse(int n,char a[20])
{
if(n<0)
{
return 0;
}
else
{
printf("%c", a[n]);
n--;
reverse(n,a);
}
}

int main()
{   int size ;
    size =15;
char array[size];

printf("Enter a sentence:");
gets(array);
size=sizeof(array);
 

reverse(size,array);

}
