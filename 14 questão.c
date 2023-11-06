#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "portuguese");
int numero; 
int contaPar = 0; 
int contaImpar = 0; 
int somaPares = 0; 
int somaImpares = 0;

    while (1) {
        printf("Digite um numero inteiro, ou digite um numero negativo para parar: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            contaPar++;
            somaPares += numero;
        } else {
            contaImpar++;
            somaImpares += numero;
        }
    }

    float mediaPares = (contaPar > 0) ? (float)somaPares / contaPar : 0;
    float mediaImpares = (contaImpar > 0) ? (float)somaImpares / contaImpar : 0;

    printf("Quantidade de numeros pares: %d\n", contaPar);
    printf("Quantidade de numeros impares: %d\n", contaImpar);
    printf("Media aritmetica dos numeros pares: %.2f\n", mediaPares);
    printf("Media aritmetica dos numeros impares: %.2f\n", mediaImpares);

    return 0;
}
