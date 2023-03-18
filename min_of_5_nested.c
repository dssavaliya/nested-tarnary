//find min. no of given 5 num using nested if else

#include<stdio.h>
int main()
{
int a , b , c , d ,e;
printf("Enter Five Number : \n");
scanf("%d%d%d%d%d",&a ,&b, &c, &d, &e);

if(a<b)

    if(a<c)
   
        if(a<d)
        
              if(a<e)
              printf("A is Min");
              else
              printf("E is Min");
   
        else if(d<e)
              printf("D is Min");
              else
              printf("E is Min");

    else if(c<d)
               if(c<e)
               printf("C is Min");
               else
               printf("E is Min");
     
         else if(d<e)
               printf("D is Min");
               else
               printf("E is Min");


else if(b<c)
    
        if(b<d)
            
            if(b<e)
              printf("B is Min");
              else
              printf("E is Min");
   
        else if(d<e)
              printf("D is Min");
              else
              printf("E is Min");

    else if(c<d)
               if(c<e)
               printf("C is Min");
               else
               printf("E is Min");
     
         else if(d<e)
               printf("D is Min");
               else
               printf("E is Min");
            

return 0;
}