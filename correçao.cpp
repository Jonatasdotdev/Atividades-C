#include <stdio.h>
#include <math.h>

void raizes_equacao_segundo_grau(float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4*a*c;

    if (delta < 0) {
        // não há raízes reais
        *x1 = *x2 = NAN;
    }
    else if (delta == 0) {
        // há apenas uma raiz real
        *x1 = *x2 = -b / (2*a);
    }
    else {
        // há duas raízes reais
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
    }
}

int main() {
    float a, b, c, x1, x2;

    // obter os coeficientes da equação do usuário
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // calcular as raízes usando a função
    raizes_equacao_segundo_grau(a, b, c, &x1, &x2);

    // exibir as raízes
    if (isnan(x1) && isnan(x2)) {
        printf("A equacao nao tem raizes reais.\n");
    }
    else if (x1 == x2) {
        printf("A equacao tem apenas uma raiz real: %.2f\n", x1);
    }
    else {
        printf("As raizes da equacao sao: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
