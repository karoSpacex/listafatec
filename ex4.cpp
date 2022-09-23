#include <iostream>
float soma (float primeiroNumero, float segundoNumero){
		return primeiroNumero + segundoNumero;
	}
	float subtracao (float primeiroNumero, float segundoNumero){
		return primeiroNumero - segundoNumero;
	}
	float multi (float primeiroNumero, float segundoNumero){
		return primeiroNumero * segundoNumero;
	}
	float divi (float primeiroNumero, float segundoNumero){
		return primeiroNumero / segundoNumero;
	}

main(){
	float num1,num2,resultado;
	int operador;
	printf("== CALCULADORA FATEC ==\nDigite 1 para SOMA '+'\nDigite 2 para SUBTRACAO '-'\nDigite 3 para MULTIPLICACAO '*'\nDigite 4 para DIVISAO '/'\n==========================");
	printf("Informe o PRIMEIRO numero: \nInforme o OPERADOR: \nInforme o SEGUNDO numero: ");
	scanf("%f",&num1);
	scanf("%d",&operador);
	scanf("%f",&num2);
	
}
