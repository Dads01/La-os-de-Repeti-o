#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

int numero;
int primo = 1; 
int i; 

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            primo = 0; 
            break;
        }
    }

    if (primo) 
    {
        printf("o Numero � primo\n");
    } else 
    {
        printf("o Numero n�o � primo\n");
    }

    return 0;
}