#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguesse");
    int dia;
    float desconto;
    float saldototal = 0;
    float saldo = 0 ;

    printf("Digite o valor da compra:\n");
    scanf("%f", &saldo);

   

    printf("Escolha dia da semana:\n");
    scanf("%d", &dia);

    if (saldo > 100) {
        
     if ((dia >= 2) && (dia <=6)){
        desconto = saldo * 0.1;   
        saldototal = saldo - desconto; 
        printf("Dia de semana"); 
             
    } else if ((dia == 1) || (dia == 7))
    {
        desconto = saldo * 0.15;
        saldototal = saldo - desconto;
        printf("Fim de semana");
    }
    
    }

    printf("O saldo total a ser pago e R$:%.2f",saldototal);

return 0;
}