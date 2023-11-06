#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int dia;
    float valor;
    float desconto;
    float total;

    printf("\nPreço total da sua compra: ");
    scanf("%f", &valor);

    printf("\nSua compra foi feita em dia de semana?\n1 - sim\n2 - não \n R:");
    scanf("%d", &dia);

    if (dia == 1)
    {
        desconto = 0.10;
    }
    else
    {
        desconto = 0.15;
    }

    if (valor >= 100)
    {
        total = valor - (valor * desconto);
    }
    else
    {
        desconto = 0;
        total = valor;
    }

    system("cls || clean");

    printf("desconto: %.2f \n", desconto);
    printf("Valor final pago: %f \n", total);

    return 0;
}