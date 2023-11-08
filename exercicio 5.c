#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char idioma;

    printf("selecione um idioma:");
    scanf("%c", &idioma);

    switch (idioma)
    {
    case '1':
        printf("ingles \n");
        printf("\n");
        printf("Boas vindas! \n");
        break;

    case '2':
        printf("espanhol \n");
        printf("\n");
        printf("Boas vindas! \n");
        break;

    case '3':
        printf("frances \n");
        printf("\n");
        printf("Boas vindas! \n");
        break;

    default:
        printf("Opcao invalida \n");
        break;
    }

    getchar();
    return 0;
}