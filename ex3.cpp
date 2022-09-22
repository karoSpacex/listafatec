#include <stdio.h>
#include <math.h>
main (){
	float A,B,C,delta;
	printf("Favor digite o valor correspondente a A: ");
	scanf("%f",&A);
	printf("Favor digite o valor correspondente a B: ");
	scanf("%f",&B);
	printf("Favor digite o valor correspondente a C: ");
	scanf("%f",&C);
	delta = pow(B,2)-4*(A*C);
	printf("DELTA = %f",delta);
}
