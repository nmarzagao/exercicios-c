#include <locale.h>
#include <stdio.h>

// Exercício 7, Dado um número verificar se ele é maior que 10.

// Definir o valor que vai ser usado para comparar
#define VALOR 10

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
  
  // Verificar se ele é maior, menor ou igual a 'VALOR'
  if (num > VALOR) {
      printf("Esse número é maior que %d", VALOR);
  }
  else if (num < VALOR) {
      printf("Esse número é menor que %d", VALOR);
  }
  else {
      printf("Esse número é igual a %d", VALOR);
  }
  
}