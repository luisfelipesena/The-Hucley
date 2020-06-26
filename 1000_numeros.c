#include <stdio.h>


int main ()
{

for (;;)
{
  int inteiros[1000],n,contador2 = 0;
  for (int contador1 = 0; contador1 < 1000; contador1++)
  {
    scanf("%d", &inteiros[contador1]);//Leia uma sequencia de 1000 inteiros
    if (inteiros[contador1] == -1)
    {
      return 0;
    }
  }

  scanf("%d", &n);//Leia inteiro N

  for (int contador1 = 0; contador1 < 1000; contador1++)
  {
    if (inteiros[contador1] == n)//quantas vezes o inteiro N aparece nos 1000 anteriores
    {
      contador2++;
    }
    else if (inteiros[contador1] == -1)
    {
      return 0;
    }
  }

 
  printf("%d appeared %d times\n",n,contador2);
}

}

