#include <stdio.h>
#include <math.h>

int main(void)
{

int caixas,qnt,dias=0;
scanf("%d",&caixas);
qnt=35*caixas;

while(qnt>=4)
{
  qnt=qnt-4;
  dias++;
}



printf("%d\n",dias);
printf("%d",qnt);

}
