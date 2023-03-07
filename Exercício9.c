#include <locale.h>
#include <stdio.h>

// Exercício 9, Dados dois números diferentes dividir o maior pelo menor valor.

int main() 
{
    
  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  // Definir as variaveis
  float maior, menor;
  
  // Pedir os números
  printf("Digite o maior numero: ");
  scanf("%f", &maior);
  
  printf("Digite o menor numero: ");
  scanf("%f", &menor);
  
  
  // Verificar se ele é o maior numero mesmo antes de calcular
  if ( maior > menor) {
      printf("%.2f / %.2f = %.2f\n", maior, menor, maior / menor);
  }
  else {
      printf("%.2f é maior que %.2f não é possivel realizar o calculo.\n", maior, menor);
  }
  
}