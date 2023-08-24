//Faça um programa em pascal que carregue um vetor com dez números reais, calcule e mostre a quantidade de números negativos e a soma dos números 
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
