#include <locale.h>
#include <stdio.h>

// Exercício 3, Dado de entrada um numeral escrever na tela “O número digitado foi: numeral”.

void main() {
    
    // Configurar Linguagem
    setlocale(LC_ALL, "Portuguese");
    
    // Declarar numeral
    int num;
    
    // Prompt para o usuario digitar um numeral
    printf("Digite um numeral:\n> ");
    
    // Salvar numeral na variavel num
    scanf("%d", &num);
    
    // Imprimir menssage
    printf("O número digitado foi: %d", num);
    
}