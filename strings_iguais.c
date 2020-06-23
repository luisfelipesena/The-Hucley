#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{

char p1[50],p2[50];

gets(p1);gets(p2);


if(strcmp(p1,p2)==0)
{
  printf("IGUAIS");
}
else
{
  printf("DIFERENTES");
}

}
