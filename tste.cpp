#include<stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("digite 3 numeros");
	scanf("%d" , &num1);
	scanf("%d" , &num2);
	scanf("%d" , &num3);
	if (num1>num2)
	 printf("%d" , num1);
	else printf("%d",  num2);
	if (num2>num3) 
	printf("%d",  num3);
}
