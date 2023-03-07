#include <locale.h>
#include <stdio.h>

// Exercício 10, Dado a formula Y = X + 5 escrever o valor de Y quando dado uma entrada de X.

int main() 
{
    
  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  // Definir a variavei
  int x;
  
  // Pedir os números
  printf("Digite um numero: ");
  scanf("%d", &x);
  
  // Calcular e Imprimir
  printf("%d + 5 = %d", x, x + 5);
  
}