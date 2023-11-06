#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");
int numero1;
int numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("%d é o maior numero e %d é o menor numero.\n", numero1, numero2);
    } else if (numero2 > numero1) {
        printf("%d é o maior numero e %d é o menor numero.\n", numero2, numero1);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }

    return 0;
}