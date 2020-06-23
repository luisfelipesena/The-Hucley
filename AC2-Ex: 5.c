#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 int dia=0,hora=0,min=0,seg;
 scanf("%d",&seg);

   while(seg>=86400)
   {
     dia++;
     seg=seg-86400;
   }

   while(seg>=3600)
   {
     hora++;
     seg=seg-3600;
   }
  
    while(seg>=60)
    {
      min++;
      seg=seg-60;
    }

  
 printf("\n%d\n%d\n%d\n%d",dia,hora,min,seg);

}
