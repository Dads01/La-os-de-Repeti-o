#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main ()
{
setlocale(LC_ALL, "portuguese"); 

int opcao; 

printf (" Menu Principal \n 1- Novo Jogo \n 2- Carregar Jogo \n 3-Opções de Jogo \n \n ");
scanf ("%d", &opcao);

switch (opcao) 
{

	case 1: 
	printf ("Gerando Mundo, aguarde um instante...");
	break;
	case 2:
	printf ("Carregando dados do save");
    
	break; 
	case 3:
		printf ("Configurações \n 1- Graficos \n 2- Audio \n 3- Jogo \n 4-Ajuda \n");
	break;
}
	
    return 0;
}