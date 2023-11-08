#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
int numero;
int i;
int divisor = 0;

printf("Digite um numero:");
scanf("%d", &numero);

for ( i = 2; i <= numero; i++)
{
    if (numero % i == 0)
    {
        divisor++;
    }
    
}
if (divisor == 2)
{
    printf("Nao sao numeros primos");
}else{
    printf("Sao primos");
}

getchar();
return 0;
}