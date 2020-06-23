#include <stdio.h>
#include <math.h>

int main(void)
{

int A,cont=1986;
scanf("%d",&A);

if(A>=2010 && A<=10000)
{
    while(cont<A)
    {
      cont=cont+76;
    }
    if(cont==A)
    {
      printf("%d\n",cont+76);
      return 0;
    }
    else if(cont>A)
    {
      printf("%d\n",cont);
      return 0;
    }
    
}


else
{
  return 0;
}

}
