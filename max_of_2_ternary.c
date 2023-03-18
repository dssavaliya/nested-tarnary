#include<stdio.h>
int main()
{
int a , b , max ;
printf("Enter Two Number : \n");
scanf("%d%d",&a ,&b);

max = a>b ? a  : b ;
printf("%d is Maximum",max);

return 0;
}