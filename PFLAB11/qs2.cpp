#include<stdio.h>
int main()
{
FILE*file;
char filename[100];
char line[1000];
int line_number=1;
printf("Enter filename:");
scanf("%s", filename);
file=fopen(filename,"r");
if(file==NULL)
{
printf("Could not open file %s\n",filename);
return 1;
}
printf("File contents:\n");
while(fgets(line,sizeof(line),file))
{
printf("%d: %s", line_number, line);
line_number++;
}
fclose(file);
return 0;
}
