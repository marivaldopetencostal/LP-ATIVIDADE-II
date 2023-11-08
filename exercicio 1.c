#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int temperatura;

    printf("Digite o grau de temperatura:");
    scanf("%d", &temperatura);

    if (temperatura >= 25)
    {

        printf("Clima ensolarado");
    }
    else
    {

        if (temperatura <= 15)
        {

            printf("Clima chuvoso");
        }
        else
        {

            if (temperatura >= 16 || temperatura <= 24)
            {
                printf("Clima nublado");
            }
        }
    }

    getchar();
    return 0;
}
