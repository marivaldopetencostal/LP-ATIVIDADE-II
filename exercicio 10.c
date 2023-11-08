 #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int operacao;
float numero1;
float numero2;
float subtracao;
float soma;

printf("1-subtração \n");
printf("2-Soma \n");

printf("Digite uma operaçao:");
scanf("%d", &operacao);


switch (operacao)
{
case 1:
    printf("Digite o 1ª numero:");
    scanf("%f", &numero1);

    printf("Digite o 2ª numero:");
    scanf("%f", &numero2);
    subtracao = numero1 - numero2;

    printf("resultado e: %.1f", subtracao);
    break;

case 2:
    printf("Digite o 1ª numero:");
    scanf("%f", &numero1);

    printf("Digite o 2ª numero:");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    printf("resultado e: %.1f", soma);
    break;

default:
printf("opcao invalida");
    break;
}


getchar();
return 0;
}