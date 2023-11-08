#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char codigo;

    
    printf("selecione um codigo:");
    scanf("%c", &codigo);

    switch (codigo)
    {
    case '1':
        printf("Camiseta\n");
        printf("\n");
        printf("R$ 20.00 \n");
        break;

    case '2':
        printf("Calca \n");
        printf("\n");
        printf("R$ 40.00 \n");
        break;

    case '3':
        printf("Sapato \n");
        printf("\n");
        printf("R$ 100.00 \n");
        break;

        

    default:
        printf("Opcao invalida \n");
        break;
    }

    getchar();
    return 0;
}