/*4. Faça um programa em C que leia duas strings do usuário e informe se elas são iguais. Faça uma versão com o uso da função strcmp() e outra sem.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define TAM 30
bool verificar(char *string, char *str); //sem uso de strcmp
bool com_strcmp(char *string, char *str);//com uso da strcmp

int main() {
  char *string1, *string2;//ponteiro
  int i = 0;//contador de caracteres do laço while

              //alocação dinâmica
  string1 = (char *) malloc(TAM * sizeof(char));
  string2 = (char *) malloc(TAM * sizeof(char));
  
  printf("Digite a primeira string (MÁXIMO DE 30 CARACTERES!):");
  scanf("%s", string1);

  printf("Digite a segunda string (MÁXIMO DE 30 CARACTERES!):");
  scanf("%s", string2);

  int iguais = verificar(string1, string2);
  if(iguais){
    printf("As strings digitadas são iguais (sem uso da strcmp)\n");
  }
  else{
    printf("As strings digitadas são diferentes (sem uso da strcmp)\n");
  }

  
  int comstrcmp = com_strcmp(string1, string2);
  if(comstrcmp){
    printf("As strings digitadas são iguais (com uso da strcmp)");
  }
  else{
    printf("As strings digitadas são diferentes (com uso da strcmp)");
  }

  free(string1);//liberar memória alocada*/
  free(string2);//liberar memória alocada*/
  
  return 0;
}

bool verificar(char *string, char *str){
  int i = 1;
  if(string[0] == str[0]){
    while(string[i] == str[i] && i < 31){
      i++;
    }
  }
  else{
    return false;
  }
  return true;
}

bool com_strcmp(char *string, char *str){
  if(strcmp(string, str) == 0){
    return true;
  }
  else{
    return false;
  }
}