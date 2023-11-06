#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char codigoSalvo[250] = "1103";
    char codigo[250];

    printf("Bem vindo\n");
    printf("Por gentileza! \n");
    printf("Digite o código cadastrado: \n");
    gets(codigoSalvo);

    system("cls");

    if (strcmp(codigo, codigoSalvo))
    {
        printf("Código, inválido");
    }
    else
    {
        printf("Seja Bem-Vindo!");
    }

    return 0;
}