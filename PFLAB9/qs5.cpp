#include<stdio.h>
#include<string.h>
void char_convertion(int string[])
{
	char holder[50]; 

for( int j=0;j<29;j++)
    {
    	holder[j]=string[j];
    	printf("%c ", holder[j]);
	}
	printf("\n");
	return;
}
void modulus(int sum[], int modans[])
{
	for(int i=0;i<29;i++)
	{
		modans[i]=sum[i]%26;
	}
	return;
}
void verticallyadd(char s1[], char s2[], int sum[])
{
	for(int i=0;i<29;i++)
	{
		if(s1[i]==' ')
		{
		sum[i]=s1[i]+s2[i]-64;//subtracting 64 for s2 only i.e.key
		}
		else
		{
		sum[i]=s1[i]+s2[i]-128;// subtracting 64 + 64 for each string
	}
	}
	return ;
}
void subtract(char string[])
{
	int holder[50];   //changed 50

for( int j=0;j<29;j++)
    {
    	holder[j]=string[j];
    		
    		if(holder[j]>64)
    		{
    			holder[j]=holder[j]-64;
			}
			
    	printf("%d ", holder[j]);
	}
	printf("\n");
	return;
	
}
void decimal_convert(char string[])
{
	int holder[50];   //changed 50

for( int j=0;j<29;j++)
    {
    	holder[j]=string[j];
    	printf("%d ", holder[j]);
	}
	printf("\n");
	return;
}
int main(){
char plain_text[50]={"QUANVOLUTIONAL NEURAL NETWORK"};
char key[50]={"QUBITS"};
char k[50];
//printing plain text
//printf("%s  \n", plain_text);
for(int i=0;i<29;i++)// printing with space
{
	printf("%c ", plain_text[i]);
}
printf("\n");

int PlainText[50];
int Key[50];
int Keys[50];
// mapping key
int count=0;
for (int i=0; i<29; i++){
k[i]=key[count]; //saving key in k in for loop
count++;
if(count>5){ // making count 0 if qubits is completed
count=0;
}

printf("%c ", k[i]);

}
printf("\n");
// decimal conertion
decimal_convert(plain_text);
decimal_convert(k); // printing k instead of key
printf("\n");
subtract(plain_text);//subtracting 64
subtract(k);
printf("\n");
int result[50];
verticallyadd(plain_text,k, result);//vertcally add
for(int i=0;i<29;i++)  //printing vertical sum
{
	printf("%d ", result[i]);
}
printf("\n");
// mod 26
int modans[50];
modulus(result,modans);
for(int i=0;i<29;i++)
{
	printf("%d ", modans[i]);
}
printf("\n");
// add 64
int add[50];
for(int i=0;i<29;i++)
{
	add[i]=modans[i]+64;
	printf("%d ", add[i]);
}
printf("\n");
//back to char
char_convertion(add);
}



