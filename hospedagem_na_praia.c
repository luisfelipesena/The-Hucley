#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float CalculaHospedagem(char *aptm, int dias);

int main() 
{
    setlocale (P_ALL,"Portuguese");
    
    char *apt = malloc(sizeof(apt));
    int dias;
    float valor_final;
    
    scanf("%[^\n]s", apt);
    scanf("%d", &dias);
    
    
    if (strcasecmp(apt,"individual")== 0 || strcasecmp(apt,"suíte dupla") == 0 || strcasecmp(apt,"suíte tripla") == 0)
    {
        valor_final = CalculaHospedagem(apt,dias); 
        
        printf("%.2f",valor_final);
    }
    
    else
     {
         printf("n foi\n");
         return 1;
     }

 return 0;
    
}       


float CalculaHospedagem(char *aptm, int diarias)
{   
    float valor_finall = 0;
    
    if (strcasecmp(aptm,"individual")== 0)
    {
        if (diarias >= 3)
        {
            valor_finall = 125 * diarias * 0.85;
        }
        
        else
        {
            valor_finall = 125 * diarias;
        }
    }
    
    else if (strcasecmp(aptm,"suíte dupla")== 0)
    {
        if (diarias >= 3)
        {
            valor_finall = 140 * diarias * 0.85;
        }
        
        else
        {
            valor_finall = 140 * diarias;
        }
    }
    
    else if (strcasecmp(aptm,"suíte tripla")== 0)
    {
        if (diarias >= 3)
        {
            valor_finall = 180 * diarias * 0.85;
        }
        
        else
        {
            valor_finall = 180 * diarias;
        }
    }
    
    return valor_finall;
}

