#include<stdio.h>
int main()
{
int num;
int i,size=30;
int A[size];
for(i = 0; i<size; i++){
printf("Enter number %d= ", i+1);
scanf("%d",& A[i]);
}
printf(" Input: {");
    for ( i = 0; i < size; i++) {
        printf("%d", A[i]);
        if (i < size-1) {
            printf(",");
        }
    }
    printf("}");
    printf("\n");
        
int max=A[0];
for(  i=0;i<size; i++)
{

if (A[i]>max)
max= A[i];
}
printf("Output:");
printf(" \n Maximum number= %d \n", max);
int min=A[0];
for(  i=0;i<size; i++)
{

if (A[i]<min)
min= A[i];
}
printf(" Minimum Number= %d ", min);

return 0;
}
