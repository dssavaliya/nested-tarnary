#include<stdio.h>
int main()
{
int a , b , c, max ;
printf("Enter Three Number : \n");
scanf("%d%d%d",&a ,&b ,&c);

max = (a>b)? (a>c? a:c):(b>c? b:c) ;
printf("%d is Maximum",max);

return 0;
}