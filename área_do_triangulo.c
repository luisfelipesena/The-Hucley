#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int b,l;
    scanf("%d%d",&b,&l);
    
    if((b>=1&&b<=1000)&&(l>=1&&l<=1000))
    {
     printf("%d",b*l);
    }
    else
    {
    return 0;    
    }
    
    
	return 0;
}
