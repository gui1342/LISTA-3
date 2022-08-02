/*2. Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de
entrada contém o caractere fornecido.*/

#include <stdio.h>
#include <string.h>
int main() {
  char string[50], caractere;
  
  printf("Digite uma string:");
  scanf("%s", string);
  
  printf("Digite um caractere para verificar na string:");
  scanf(" %c", &caractere); //esse espaço serve para limpar o buffer do enter do teclado
  
  for(int i = 0; i <= strlen(string); i++){
    if(caractere == string[i]){
      printf("O caractere %c está contido na string informada!\nPosição do caractere %c na string %s: %iª posição", caractere, caractere, string, i + 1);
      break;
    }
    else if(i == strlen(string)){
      printf("O caractere %c não está contido na string informada!", caractere);
    }
  }
  
  return 0;
}