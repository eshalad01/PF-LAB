#include<stdio.h>

struct Rectangle{
float length;
float width;
};
int check(struct Rectangle r)
{
if (r.length>0.0 && r.length<20.0 && r.width<20.0  && r.width>0.0)
{
return 1;
}
else
{
return 0;
}
}
float calcper(struct Rectangle r)
{
return 2*(r.length+r.width);
}

float calcarea(struct Rectangle r)
{
return r.length*r.width;
}

int main()
{
struct Rectangle r;
printf(" Enter length:");
scanf("%f", &r.length);
printf(" Enter width:");
scanf("%f", &r.width);
if(check(r)){
printf("Perimeter:%.2f\n",calcper(r));
printf("Area:%.2f\n",calcarea(r));
}
else{
printf(" Invalid dimensions\n");
}
return 0;
}
