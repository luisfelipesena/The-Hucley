# include <stdio.h>
int main (){
 int num,resto,divisao;
 do{
 scanf("%d",&num);
 if(num<1000||num>9999)
  {
     return 0;
  }
  else
  {
   divisao=(num/100);
   resto=(num%100);
      if((resto+divisao)*(divisao+resto)==num)
     {
       printf("propriedade do 3025!\n");
     }
      else
      if((resto+divisao)*(divisao+resto)!=num)
     {
       printf("numero comum\n");
     }
  }
   }
   while(num>=1000&&num<=9999);
 return 0;
}
