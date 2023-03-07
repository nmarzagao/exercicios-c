#include <locale.h>
#include <stdio.h>

// Exercício 8, Dado um número verificar se ele é positivo ou negativo.

int main() 
{
    
  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  // Definir a variavel
  int num;
  
  // Pedir um número
  printf("Digite um número: ");
  
  // Guardar o número na memória 'num'
  scanf("%d", &num);
  
  // Verificar se ele é positivo ou negativo
  if (num > 0) {
      printf("Esse número é positivo.\n");
  }
  else if (num == 0) {
      printf("O zero é um número neutro, ou seja, não é um número nem positivo e nem negativo.\n");
  }
  else {
      printf("Esse número é negativo.\n");
  }
  
}