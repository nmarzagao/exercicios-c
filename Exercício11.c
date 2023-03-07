#include <locale.h>
#include <stdio.h>

// Exercício 11, Dado a formula media = n1+n2+n3/3 escrever o valor do resultado ao usuário quando ele digitar o valor de n1, n2 e n3.

// Vetor de Notas
typedef struct
{
    
    int nota[3];
    
} Vetor;


int calcularMedia(Vetor vetor);

int main() 
{
    
  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  // Definir o vetor
  Vetor vetor;
  
  // Pedir os números
  for (int i; i < 3; i++)
  {
      printf("Digite o a %d° nota: ", i+1);
      scanf("%d", &vetor.nota[i]);
  }
  
  // Calcular e Imprimir
  printf("( %d + %d + %d ) / 3 = %d\n", vetor.nota[0], vetor.nota[1], vetor.nota[2], calcularMedia(vetor));
  
}

int calcularMedia(Vetor vetor)
{
    return (vetor.nota[0] + vetor.nota[1] + vetor.nota[2]) / 3;
}