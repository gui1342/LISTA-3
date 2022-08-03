/*3. Faça um programa em C que leia uma string do usuário e informe a quantidade de caracteres da string fornecida. Não use a função strlen().*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 200

int main() {
  char *string;//ponteiro
  int i = 0;//contador de caracteres do laço while
  string = (char *) malloc(TAM * sizeof(char));//alocação dinâmica
  
  printf("Digite uma string (MÁXIMO DE 200 CARACTERES!):");
  scanf("%s", string);
  
  while(!(string[i] == '\0')){//a condição do laço é até encontrar o caractere nulo, ou seja o final da string
    i++;//adiciona 1 ao contador a cada caractere lido 
  }
  printf("A string < %s > tem tamanho %i", string, i);
  free(string);//liberar memória alocada
  
  return 0;
}