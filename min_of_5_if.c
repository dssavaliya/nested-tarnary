#include<stdio.h>
int main()
{
int a , b , c , d ,e;
printf("Enter Five Number : \n");
scanf("%d%d%d%d%d",&a ,&b, &c, &d, &e);

int min = a;

if(b<min) min = b;
if(c<min) min = c;
if(d<min) min = d;
if(e<min) min = e;

printf("\n %d is Minumum",min);
return 0;
}