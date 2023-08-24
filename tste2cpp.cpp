#include<stdio.h>

int main(){
	  
  
    int num1, num2, num3, maior,menor;
  
    printf("Informe um numero: ");
    scanf("%d",&num1);
    printf("Informe outro numero: ");
    scanf("%d",&num2);
    printf("Informe mais um numero: ");
    scanf("%d",&num3);

  
    if (num1 > num2 && num1 > num3)
        maior = num1;
        else
            if(num2 > num3)
                maior = num2;
            else
                maior = num3;
  
  
  
    if (num1 < num2 && num1 < num3)
        menor = num1;
        else
            if(num2 < num3)
                menor = num2;
            else
                menor = num3;
  
    printf("O maior numero e %d\n",maior);
    printf("O menor numero e %d",menor);


}
