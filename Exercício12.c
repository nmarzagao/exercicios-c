#include <locale.h>
#include <stdio.h>

// Exercício 12, Dado a formula A/5 = B/(A+2) calcular o valor de B dado uma entrada de A.

void calcularB(double a);

void main() 
{
    
  // Configurar Linguagem
  setlocale(LC_ALL, "Portuguese");

  // Definir A
  double a;
  
  // Pedir os números
  printf("Digite o valor de A: ");
  scanf("%lf", &a);
  
  
  // Calcular e Imprimir
  calcularB(a);

}

void calcularB(double a)
{
    // A/5 = B/(A+2)
    
    double s = a / 5.0;
    
    double b = (a + 2.0) * s;
    
    // Verificar o valor de B
    if ( a / 5.0 == b / (a + 2.0) ) 
    {
        printf("S = %.2lf / 5\n", a);
        printf("S = %.2lf\n", s);
        printf("B = (%.2lf + 2) * %.2lf\n", a, s);
        printf("B = %.2lf\n", b);
        printf("Verificando o resultado... \n");
        printf("%.2lf / 5 = %.2lf / (%.2lf + 2)\n", a, b, a);
        printf("B = %.2lf\n", b);
    }
    else 
    {
        // Durante meus testes o unico numero que não funcionou foi 1
        printf("Deu errado\n");
    }
 
}