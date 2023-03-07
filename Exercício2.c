#include <locale.h>
#include <stdio.h>

// Exercício 2, Dado a entrada via teclado do nome de usuário (seu nome) escrever na tela “Bem-vindo nome de usuário”

void main() {
    
    // Configurar Linguagem
    setlocale(LC_ALL, "Portuguese");
    
    // Declarar String
    char nome[25];
    
    // Prompt para o usuario
    printf("Digite o seu nome\n> ");
    
    // Salvar resposta em nome
    gets(nome);
    
    // Imprimir frase com nome
    printf("Bem-vindo %s.", nome);
    
}