#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 4

typedef struct 
{
	int matriz2d[TAM][TAM];
	int matriz3d[TAM][TAM][TAM];
	int matriz4d[TAM][TAM][TAM][TAM];
	
} Dados;

void getMatriz2d(Dados m);
void getMatriz3d(Dados m);
void getMatriz4d(Dados m);


void main(void)  
{
	setlocale(LC_ALL, "Portuguese");
	
	Dados m;
	
	printf("Matriz 2d:\n");
	getMatriz2d(m);
	printf("\n");
	printf("Matriz 3d:\n");
	getMatriz3d(m);
	printf("\n");
	printf("Matriz 4d:\n");
	getMatriz4d(m);
	
}

void getMatriz2d(Dados m) 
{	
	int i, j;

	srand(time(NULL));
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			m.matriz2d[i][j] = (rand() % 9) + 1;
		}
	}
	
	for (i = 0; i < TAM; i++)
	{
		printf("| ");
		for (j = 0; j < TAM; j++)
		{
			printf(" %d ", m.matriz2d[i][j]);
		}
		printf(" |\n");
	}
		
}

void getMatriz3d(Dados m)
{
	int i, j, k;
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			for (k = 0; k < TAM; k++)
			{
				m.matriz3d[i][j][k] = (rand() % 9) + 1;
			}
		}
	}
	
	for (i = 0; i < TAM; i++)
	{
		printf("| ");
		for (j = 0; j < TAM; j++)
		{
			for (k = 0; k < TAM; k++)
			{
				printf(" %d ", m.matriz3d[i][j][k]);
			}
			
			printf(" |");
		}
		
		printf("\n");
	}
	
}

void getMatriz4d(Dados m)
{
	int i, j, k, l;
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			for (k = 0; k < TAM; k++)
			{
				for (l = 0; l < TAM; l++)
				{
					m.matriz4d[i][j][k][l] = (rand() % 9) + 1;
				}
			}
		}
	}
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("| ");
			for (k = 0; k < TAM; k++)
			{
				for (l = 0; l < TAM; l++)
				{
					printf(" %d ", m.matriz4d[i][j][k][l]);
				}
			}
			printf(" |");
			printf("\n");
		}
		
		printf("\n");
	}
	printf(" |");
}



