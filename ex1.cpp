#include <stdio.h>
main(){
	float gasolina,etanol;
	printf("Digite o valor da gasolina: ");
	scanf("%f",&gasolina);
	printf("Digite o valor do etanol: ");
	scanf("%f",&etanol);
	if ((gasolina*0.7) < etanol){
		printf("A gasolina compensa.");
	}
	else{
		printf("O etanol compensa mais.");
	}
}

