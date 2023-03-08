#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 60

void main(void)
{
	int i;
	
	int bilhete[TAM];
	
	srand(time(NULL));
	
	for (i=0; i < TAM; i++)
	{
		bilhete[i] = (rand() % 60) + 1;
	}
	
	for (i=0; i < TAM; i++)
	{
		printf("[ %d ]", bilhete[i]);
	}
	
	// Busca sequencial
	
	for (;;) 
	{
		i++; 
		
		if ( i > TAM )
		{
			printf("\n\nNão foi encontrado\n");
			break;	
		}
		else if ( bilhete[i] == 45 ) 
		{
			printf("\n\nFoi encontrado\n");
			break;	
		}
		
	}
	
	
	
	
}
