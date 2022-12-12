#include<stdio.h>

int main()
{
    printf("Hello world!");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
main()
{
   float precoFinal, custoFabricacao, impostos, margemDeLucro;
   printf("\nDigite o custo de fabricacao..............:");
   scanf("%f", &custoFabricacao);
   printf("\Digite os impostos.........................:");
   scanf("%f", &impostos);
   printf("\nDigite a porcentagem de lucro (0 a 100):   ");
   scanf("%f", &margemDeLucro);

   custoFabricacao = custoFabricacao * (1+(margemDeLucro/100));

   precoFinal = custoFabricacao + impostos;
   
   printf("\nO preco final eh R$ %.2f" , precoFinal);
}