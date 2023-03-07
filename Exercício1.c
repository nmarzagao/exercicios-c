#include <locale.h>
#include <stdio.h>

// Exercício 1, Escreva um programa para escrever quando inicializado “Olá aluno hoje é sexta-feira”.


void main() {
    
    // Configurar Linguagem
    setlocale(LC_ALL, "Portuguese");
    
    // Imprimir a menssagem no terminal
    printf("Olá aluno hoje é sexta-feira.");

}