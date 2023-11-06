#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idioma;

    printf("---------------------------------\n");

    printf("escolha o idioma desejado abaixo:\n 1 - English \n 2 - Spanish \n 3 - French \n R: ");
    scanf("%d", &idioma);

    system("cls || clean");

    if (idioma == 1)
    {
        printf("Welcome!");
    }
    else
    {
        if (idioma == 2)
        {
            printf("Bienvenido!");
        }
        else
        {
            if (idioma == 3)
            {
                printf("Accueillir!");
            }
            else
            {
                printf("A opção digitada é inválida");
            }
        }
    }

    return 0;
}