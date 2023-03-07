#include <locale.h>
#include <stdio.h>

// Exercício 6, Escreva um programa que imprima os 10 primeiros números negativos.

int main() {

  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  printf("| ");
  
  // Imprimir numeros de -1 a -10
  for (int i = -1; i > -11; i--)
  {
      printf("%d | ", i);
  }
  
}