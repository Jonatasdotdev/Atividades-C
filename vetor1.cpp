//programa em c que carregue um vetor de nove elementos num�ricos inteiros, calcule e mostre os n�mero �mpares e suas respectivas posi��es.


#include<stdio.h>
#include<stdlib.h>



int main() {
  int vetor[9];
  int i;

  printf("Digite os valores do vetor:\n");
  
  for (i = 0; i < 9; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("N�meros �mpares e suas respectivas posi��es:\n");

  for (i = 0; i < 9; i++) {
    if (vetor[i] % 2 != 0) {
      printf("Posi��o %d: %d\n", i+1, vetor[i]);
    }
  }

  return 0;
}

