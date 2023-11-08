#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("--------------------MENU----------------------- \n");
    printf("1- Novo jogo \n");
    printf("2- Carregar jogo \n");
    printf("3- Configuracao \n");
    printf("\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Novo jogo");
        break;

    case 2:
        printf("Carregar jogo");
        break;

    case 3:
        printf("Configuracao");
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    getchar();
    return 0;
}