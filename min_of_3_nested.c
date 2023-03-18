//find min. no of given 3 num using nested if else

#include<stdio.h>
int main()
{
int a , b , c ;
printf("Enter Three Number : \n");
scanf("%d%d%d",&a ,&b, &c);
if(a<b)
{
   if(a<c)
   {
   printf("A is Min");
   }
   else
   {
    printf("C is Min");
   }

}
else
{
     if(b<c)
     {
     printf("B is Min");
     }
     else
     {
     printf("C is Min");
     }
}


return 0;
}