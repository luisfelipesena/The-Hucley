#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 int n;
 scanf("%d",&n);

 while(n>10||n<-10)
 {
   n=n%10;
 }
 if(n==10)
 {
   printf("%d",0);
   return 0;
 }
 printf("%d",n);
}
