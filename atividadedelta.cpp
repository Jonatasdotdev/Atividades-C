#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int delta(int a, int b, int c) {
    int d = b*b - 4*a*c;
    if (d == 0){
        return 0;
    }
    else if (d > 0) {
        return 1;
    }
    else {
        return -1;
    }
}

int main(){
    int a, b, c, resultado;
    printf("Digite os 3 valores da funcao:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    resultado = delta(a, b, c);

    if (resultado == 0) {
        printf("A equacao possui uma raiz real.\n");
    }
    else if (resultado > 0) {
        printf("A equacao possui duas raizes reais.\n");
    }
    else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}

