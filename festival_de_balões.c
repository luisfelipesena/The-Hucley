#include <stdio.h>
#define ALT 200//altura maxima
#define DSEG 2000//distancia maxima

int main(void)
{

char comando;
int N,cont=1,dist=0,altura=0;//contador q vai repetir o scanf ate bater N

scanf("%d",&N);

  while(cont<=N)
   {
    scanf(" %c",&comando);
    cont++;
    
      if(comando=='D' && altura==0)
      {
        altura==0;
      }

      else if((comando=='F'||comando=='V') && altura==0 )
      {
       altura==0;
      }

      else if(comando=='S' && altura<ALT )
      {
        altura=altura+10;
      }

      else if(comando=='D' && altura>=10)
      {
        altura=altura-10;
      }

      else if(comando=='F' && dist<DSEG )
      {
        dist=dist+10;
      }

     else if(comando=='V' && dist<DSEG )
      {
        dist=dist+10;
        dist=(-dist);
      }
      
      else if((comando=='V'||comando=='F') && dist==DSEG )
      {
        dist=dist;
      }

      else if(comando=='S' && altura==ALT)
      {
        altura=altura;
      }
      
      else 
      {
        return 0;
      }
      

   }  
  
 
 printf("%d",altura); printf(" "); printf("%d",abs(dist));
}
