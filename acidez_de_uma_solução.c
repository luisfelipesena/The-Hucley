#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	
	float pH;
	scanf("%f",&pH);
	
	if(pH>=1 && pH<7)
	{
	   printf("Acida"); 
	}
	else if(pH<=14 && pH>7)
	{
	    printf("Basica");
	}
	else if(pH==7)
	{
	    printf("Neutra");
	}
	else
	{
	    return 0;
	}
	}
