#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo = 123;

    do
    {
        printf("Digite seu codigo de acesso: ");
        scanf("%d", &codigo);

    } while (codigo != 123);
    printf("\n");
    printf("acesso permitido!");

    getchar();
    return 0;
}