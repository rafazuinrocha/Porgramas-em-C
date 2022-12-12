#include<stdio.h>
#include<stdlio.h>

main()
{
    float precofinal, custoFabricacao, impostos, margemDeLucro;
    
    printf("\nDigite o custo de fabricacao...........: ");
    scanf("%f" , &custoFabricacao);
    printf("\nDigite os impostos.....................: ");
    scanf("%f" , &impostos);
    printf("\nDigite a porcentagem de lucro (0 a 100): ");
    scanf("%f" , margemDeLucro);
    
    custoFabricacao = custoFabricacao + (1+(margemDeLucro/100));
    
     precoFinal = custoFabricacao + impostos;
    
    system( "clear");
    
    printf("\nO preco final eh R$ %.2f", precoFinal);
    }
    
