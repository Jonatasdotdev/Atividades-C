//programa em c que carregue um vetor de nove elementos numéricos inteiros, calcule e mostre os número ímpares e suas respectivas posições.


#include<stdio.h>
#include<stdlib.h>



int main() {
  int vetor[9];
  int i;

  printf("Digite os valores do vetor:\n");
  
  for (i = 0; i < 9; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Números ímpares e suas respectivas posições:\n");

  for (i = 0; i < 9; i++) {
    if (vetor[i] % 2 != 0) {
      printf("Posição %d: %d\n", i+1, vetor[i]);
    }
  }

  return 0;
}

