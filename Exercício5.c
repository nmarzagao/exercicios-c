#include <locale.h>
#include <stdio.h>

// Exercício 5, Dado de entrada dois valores numéricos fazer a subtração e apresentar ao usuário.”

int main() 
{
    
    // Configurar Linguagem
    setlocale(LC_ALL, "Portuguese");
    
    // Declarar as variaveis
    int x, y;
    
    // Pedir o valor de x e y
    printf("Digite o vaor de x:\n> ");
    scanf("%s", &x);
    
    printf("Digite o vaor de y:\n> ");
    scanf("%s", &y);
    
    // Calcular e Imprimir
    printf("Resultado: %d", x - y);
    
}