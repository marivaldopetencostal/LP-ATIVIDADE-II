#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int i;
int numero;

printf("Digite um numero positivo:");
scanf("%d", &numero);

if (numero > 0)
{
    printf("Contagem regressiva %d: \n",numero);

while (numero >= 0)
{
    switch (numero)
    {
    case 0:
        printf("Zero");
        break;
    
    default:
    printf("%i \n", numero);
        break;
    }
    numero--;
}

}


getchar();
return 0;
}