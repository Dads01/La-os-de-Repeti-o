#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ()
{

setlocale(LC_ALL, "portuguese");
int numero1; 
int numero2;
int soma=0;
int operacao; 

printf ("Digite o Primeiro Numero: ");
scanf ("%d", &numero1);

printf ("Digite o Segundo Numero: ");
scanf ("%d", &numero2);

printf ("Escolha uma Operação: 1 para (soma) e 2 para (subtração)");
scanf ("%d", &operacao);

switch (operacao)
{
case 1:
    soma = numero1 + numero2;
    printf ("Resultado: %d", soma);
    break;

case 2:
soma = numero1 - numero2; 
printf ("Resultado: %d", soma);
    break;
}
    return 0;
}