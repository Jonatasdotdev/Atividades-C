//Fa�a um programa em pascal que carregue um vetor com dez n�meros reais, calcule e mostre a quantidade de n�meros negativos e a soma dos n�meros 
//positivos desse vetor.
#include<stdio.h>
#include<stdlib.h>



int main() {
  int vetor[10];
  int i, resultado=0;
  
  printf("Digite o numero\n");
  for(i=0; i<10; i++){
   scanf("%d", &vetor[i]);
}
  for(i=0; i<10; i++){
  if(vetor[i]<0){
  	printf("este numero e negativo %d", vetor[i]);
  }
  }
  if (vetor[i]>0){
  	resultado=vetor[i]*2;
  	printf("este e o resultado %d", resultado);
  }
}
