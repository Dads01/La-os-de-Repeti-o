#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int i;
    int notas;
    float nota;
    float soma = 0;
    float media;

    printf("Informe as desejadas notas: ");
    scanf("%d", &notas);

    for (i = 1; i <= notas; ++i)
    {
        printf("Informe a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / notas;

    printf("A media das notas digitadas e: %.2f\n", media);

    return 0;
}