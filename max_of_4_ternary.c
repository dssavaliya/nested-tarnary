#include<stdio.h>
int main()
{
int a , b , c, d , max ;
printf("Enter Four Number : \n");
scanf("%d%d%d%d",&a ,&b ,&c ,&d);
/*A=a>b?a:b;
  B=c>d?c:d;
  C=A>B?A:B;
*/
max = (a>b && a>c && a>d)? a :((b>c && b>d)? b :(c>d? c:d)) ;
printf("%d is Maximum",max);

return 0;
}