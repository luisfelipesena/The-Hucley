#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	
	int N,cem=0,cinq=0,vinte=0,dez=0,cinco=0,dois=0,um=0;
	scanf("%d",&N);
	
	if(N>=100)
	{
	 while(N>=100)
	{
	    N=N-100;
	    cem++;
	}
	}
	
if(N>=50)
	{
	 while(N>=50)
	 {
	     N=N-50;
	     cinq++;
	 }
	}
if(N>=20)
	{
	  while(N>=20)
	  {
	      N=N-20;
	      vinte++;
	  }  
	}
if(N>=10)
	{
	    while(N>=10)
	    {
	        N=N-10;
	        dez++;
	    }
	}
 if(N>=5)
	{
	    while(N>=5)
	    {
	        N=N-5;
	        cinco++;
	    }
	}
if(N>=2)
	{
	    while(N>=2)
	    {
	        N=N-2;
	        dois++;
	    }
	}
if(N>=1)
	{
	    while(N>=1)
	    {
	        N=N-1;
	        um++;
	    }
	}
printf("Digite o valor inteiro:\n");
printf("%d nota(s) de R$ 100,00\n",cem);
printf("%d nota(s) de R$ 50,00\n",cinq);
printf("%d nota(s) de R$ 20,00\n",vinte);
printf("%d nota(s) de R$ 10,00\n",dez);
printf("%d nota(s) de R$ 5,00\n",cinco);
printf("%d nota(s) de R$ 2,00\n",dois);
printf("%d moeda(s) de R$ 1,00\n",um);
}
