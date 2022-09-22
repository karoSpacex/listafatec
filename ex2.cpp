#include <stdio.h>
main(){
	float peso,altura,imc;
	printf("Favor, digite o seu peso: ");
	scanf("%f",&peso);
	printf("Favor, digite sua altura em metros: ");
	scanf("%f",&altura);
	imc = peso / (altura*altura);
	if (imc < 18.5){
		printf("Voce esta abaixo do peso.");
	}
	else if (imc < 24.9){
		printf("Voce esta no peso ideal.");
	}
	else if (imc <29.9){
		printf("Voce esta levemente acima do peso.");
	}
	else if (imc < 34.9){
		printf("Voce esta em obesidade grau I.");
	}
	else if (imc < 39.9){
		printf("Voce esta em obesidade grau II");
	}
	else{
		printf("Voce tem obesidade grau III (morbida).");
	}
}
