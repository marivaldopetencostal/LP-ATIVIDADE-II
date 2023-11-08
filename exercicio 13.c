#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int primeironumero;
int segundonumero;

 
printf("Digite o primeiro numero:");
scanf("%d", &primeironumero);

printf("Digite o segundo numero:");
scanf("%d", &segundonumero);

if (primeironumero > segundonumero){
    printf("O Primeiro numero e maior e o Segundo numero e menor");

}else{

    if (segundonumero > primeironumero){
       printf("O segundo numero e maior e o Primeiro numero e menor");  
     
}
   
}

getchar();
return 0;
}