#include<stdio.h>
int main()
{  
	int numb,i;
	int f=0, s=1,next;
	printf("Input:");
	scanf("%d", & numb);
	if(numb>1)
    {
			for(i=2;i*i<=numb;i++)
		{
		 if(numb%i==0)
			{
			printf("The number %d is not prime \n", numb);
			return 0;
			}	
		 }
		 
		 
	    printf("This is a prime number \n");
		
	    printf("\nFibonacci series for %d terms: \n", numb);
       
		}
		if(numb>1){
			printf("%d %d ", f,s);

        for (i = 2; i < numb; i++) {
            next = f + s;
            f = s;
            s = next;
            printf("%d ", next);  
        }
      
    }
	
	

    return 0;
}
			
	
