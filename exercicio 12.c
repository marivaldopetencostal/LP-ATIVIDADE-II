#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int i = 0;
    float nota;
    float soma;
    float media;
    int quantidade;

    setlocale(LC_ALL, "portuguese");

printf ("Digite quantidade de notas:");
scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite a %d nota: ", i+1);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("\n");
    printf("Sua media e : %.1f \n", media);

    getchar();
    return 0;
}