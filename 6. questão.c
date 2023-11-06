#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int roupas;

    printf("Escolha o produto que Deseja:\n 1- Camisa \n 2- Calça \n 3-Sapato \n ");
    scanf("%d", &roupas);

    switch (roupas)
    {

    case 1:
        printf("Camisa 128,00 R$ ");
        break;
    case 2:
        printf("Calça 165,00 R$");
        break;
    case 3:
        printf("Sapato 260,00 R$");
        break;
    }

    return 0;
}