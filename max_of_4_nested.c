//find max. no of given 4 num using nested if else

#include<stdio.h>
int main()
{
int a , b , c , d;
printf("Enter Four Number : \n");
scanf("%d%d%d%d",&a ,&b, &c, &d);

if(a>b)

   if(a>c)
   
      if(a>d)
      printf("A is Max");
      else
      printf("D is Max");
   
   else if(c>d)
        printf("C is Max");
        else
        printf("D is Max");

else if(b>c)

        if(b>d)
        printf("B is Max");
        else
        printf("D is Max");
     
     else if(c>d)
          printf("C is Max");
          else
          printf("D is Max");
     
return 0;
}