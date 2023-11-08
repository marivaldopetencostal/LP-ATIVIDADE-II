#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
    int opcao;
    float valor;

    do {
        printf("Escolha a conversao desejada:\n");
        printf("1 - Quilometros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("0 - Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em quilometros: ");
                scanf("%f", &valor);
                printf("%.2f quilometros equivalem a %.2f milhas.\n", valor, valor * 0.621371);
                break;
            case 2:
                printf("Digite o valor em graus Celsius: ");
                scanf("%f", &valor);
                printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", valor, (valor * 9/5) + 32);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 0);


    getchar();
    return 0;
}