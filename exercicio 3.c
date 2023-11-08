#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota;

    printf("Digite uma nota:");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("Excelente");
    }
    else if (nota >= 7)
    {
        printf("Bom");
    }
    else if (nota >= 5)
    {
        printf("Razoavel");
    }
    else if (nota < 5)
    {
        printf("Insuficiente");
    }
        getchar();
        return 0;
    }
