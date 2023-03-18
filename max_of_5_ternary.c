#include<stdio.h>
int main()
{
int a , b , c, d , e , f , g, h, max ;
printf("Enter Five Number : \n");
scanf("%d%d%d%d%d",&a ,&b ,&c ,&d ,&e);

f = a>b? a:b;
g = c>d? c:d;
h = f>g? f:g;
max = h>e? h:e;

printf("%d is Maximum",max);

return 0;
}