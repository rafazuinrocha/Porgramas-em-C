/*
1. Construa um programa em linguagem C que auxilie um fabricante
   a calcular o preço final de venda de um determinado produto,
   o qual será composto do custo de fabricação somado com os impostos
   e acrescida da margem de lucro. O programa deverá ler do teclado 
   o custo de fabricação (em reais) e o valor dos impostos (em reais).
   Em seguida deverá ler do teclado a porcentagem (valor entre 0 e 100)
   da margem de lucro que deverá incidir somente sobre o custo de
   fabricação. Ao final deverá ser impresso na tela o preço final de
   venda do produto. 
*/
   
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
   
   system( "clear");

   printf("\nO preco final eh R$ %.2f" , precoFinal);
}