#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Exercício 4, Dado de entrada um valor lógico escrever na tela “O valor oposto é: valor lógico”

void str_toupper(char* string);
void imprimir_oposto(char* logica);

int main() 
{
    
    // Configurar Linguagem
    setlocale(LC_ALL, "Portuguese");
    
    // Declarar string
    char logica[10];
    
    // Prompt para o usuario digitar um valor logico
    printf("Digite um valor lógico:\n> ");
    
    // Salvar string na variavel logica
    scanf("%s", logica);
    
    // Converter para maiúscula
    str_toupper(logica);
    
    // Imprimir o oposto do que foi digitado
    imprimir_oposto(logica);
    
}

void str_toupper(char* string)
{
    // Selecionar cada char da string
    for (int i = 0; string[i]; i++)
    {
        // Modificar para letra maiúscula
        string[i] = toupper(string[i]);
    }
}


void imprimir_oposto(char* logica)
{
    // Comparar Logica ao resultado aceitavel
    if (strcmp(logica, "VERDADE") == 0 || strcmp(logica, "V") == 0)
    {
        printf("O valor oposto é Falso");
    }
    else if (strcmp(logica, "FALSO") == 0 || strcmp(logica, "F") == 0)
    {
        printf("O valor oposto é Verdade");
    }
    // Imprimir menssagem de erro
    else
    {
        printf("Error: input invalido.\n");
        printf("Digite 'verdade'/'v' ou 'falso'/'f'.\n");
    }
}