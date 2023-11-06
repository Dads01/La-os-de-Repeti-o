#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int clima;

    printf("informe a temperatura: ");
    scanf("%d", &clima);

    if (clima > 25)
    {
        printf("Clima ensolarado!");
    }
    else
    {
        if (clima < 15)

        {
            printf("Clima chuvoso!");
        }
        else
        {
            if (clima <= 25 && clima >= 15)
            {
                printf("Clima nublado!");
            }
        }
    }
    return 0;
}