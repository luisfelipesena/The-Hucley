#include <stdio.h>
#include <math.h>

int main(void)
{

int n,fig[10000],J=0,M=0,somj=0,somm=0,K;//k eh outro contador
scanf("%d",&n);
if(n>10000)
{
return 0;
}

 for(int i=0;i<n;i++)
 {
   scanf("%d",&fig[i]);

   K=i;


     if(fig[i]%2==0)
     {
       J++;
         while(K>=0)//contagem regressiva para checar os iguais e anular a repeticao na soma 
         {
             K--;
             if(fig[K]==fig[i])
             {
            fig[i]=0;
             }
         }
     somj=somj+fig[i];
     }


     else
     {
         M++;
         while(K>=0)//contagem regressiva para checar os iguais e anular a repeticao na soma
         {
             K--;
             if(fig[K]==fig[i])
             {
            fig[i]=0;
             }
         }
     somm=somm+fig[i];  
     } 
 }

 printf("%d\n",J);
 printf("%d\n",M);

 if(somj>somm)
 {
     printf("%d\n",somj);
 }
 else 
 {
     printf("%d\n",somm);
 }


}
    
