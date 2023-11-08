#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i = 1;
    int numero = 0;
    int pares = 0;
    int impares = 0;
    float soma = 0;
    float mediapares = 0;
    float somaimpares = 0;
    float c;
    float mediaimpares = 0;
    do
    {
        printf("Digite o %d° numero positivo :", i);
        scanf("%d", &numero);
        i = i + 1;

        if (numero != 0)
        {
            c = c + 1;

            if (numero % 2 == 0)
            {
                pares++;
                soma = soma + numero;
                mediapares = soma / pares;
            }
            else
            {
                impares = impares + 1;
                somaimpares = somaimpares + numero;
                mediaimpares = somaimpares / impares;
            }
        }

    } while (numero > 0);

    printf("Quantidades de pares: %d \n", pares);
    printf("Quantidades de impares: %d \n", impares);
    printf("Quantidades de media pares: %.1f \n", mediapares);
    printf("Quantidades de media impares: %.1f \n", mediaimpares);

    getchar();
    return 0;
}