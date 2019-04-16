#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	int X1, Y1;
	int X2, Y2;
	double Z1 , Z2; 
	double VALOR;
	
	scanf("%d", &X1);
	scanf("%d", &Y1);
	scanf("%lf", &Z1);
	scanf("%d", &X2);
	scanf("%d", &Y2);
	scanf("%lf", &Z2);
	
	
	VALOR = ((Y1 * Z1) + (Y2 * Z2)); 
	printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
	
	return 0;
}
