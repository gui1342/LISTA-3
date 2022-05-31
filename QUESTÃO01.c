/*1. Faça um programa em C que leia um vetor do tipo float com 15 elementos 
e apresente a soma do menor e maior elemento do vetor fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

#define q 15
int main() {
  float v[q], maior = FLT_MIN, menor;
  
  srand( time (NULL));
  
  //colocar valores aleatórios no vetor
    for(int i = 0; i < q; i++){
      v[i] = (float)(((rand()%102) + 1)/1.0);
      }
  
  printf("Vetor gerado\n");
  //exibir vetor
    for(int i = 0; i < q; i++){
      printf("%f ", v[i]); 
        printf(" ");
      }

  //descobrir maior valor
    for (int i = 0; i < q; i++) 
    {
      if (i < q && v[i] > maior) 
        maior = v[i];
      }
  
    menor = maior;
  
  //descobrir menor valor
    for (int i = 0; i < q; i++)
    {
      if (i < q && v[i] < menor)
        menor = v[i];
    }
  
    printf("\nValor do maior número do vetor: %.3f", maior);
    printf("\nValor do menor número do vetor: %.3f ",menor);
  printf("\nA soma de %.3f com %.3f é %.3f", maior, menor, maior + menor);
  
  return 0;
}
