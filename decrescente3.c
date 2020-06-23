#include <stdio.h>
#include <stdlib.h>
int main (void){
    int a, b, c, x, y;
    scanf("%d%d%d",&a,&b,&c);
     if (a <= b)
    {
	    x = a;
	    a = b;
	    b = x;
    }
     if (b <= c)
    {  
    	y = b;
	    b = c;
	    c = y;
    }
     if (a <= b)
    {
	    x = a;
	    a = b;
    	b = x;
    }
    printf("%d\n%d\n%d\n",a,b,c); 
    return 0;
}

