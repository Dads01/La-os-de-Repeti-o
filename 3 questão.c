#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int nota = 0;

    printf("Informe sua nota: ");
    scanf("%d", &nota);

    if (nota < 5)
    {
        printf("Insuficiente");
    }
    else
    {
        if (nota >= 5 && nota <= 6.9)
        {
            printf("Razoável");
        }
        else
        {
            if (nota >= 7 && nota <= 8.9)

            {
                printf("Bom");
            }
            else
            {
                if (nota >= 9)
                {
                    printf("Excelente");
                }
            }
        }
    }

    return 0;
}