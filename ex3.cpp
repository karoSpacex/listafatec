#include <stdio.h>
#include <math.h>
main (){
	float A,B,C,delta,x1,x2;
	printf("Favor digite o valor correspondente a A: ");
	scanf("%f",&A);
	printf("Favor digite o valor correspondente a B: ");
	scanf("%f",&B);
	printf("Favor digite o valor correspondente a C: ");
	scanf("%f",&C);
	delta = pow(B,2)-4*(A*C);
	printf("DELTA = %.2f\n",delta);
	x1 = -B+sqrt(delta)/(2*A);
	x2 = -B-sqrt(delta)/(2*A);
	printf("Entao X1 eh: %f\n",x1);
	printf("Entao x2 eh: %f",x2);
}

